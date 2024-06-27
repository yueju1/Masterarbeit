import rclpy
import rclpy.node
from pm_moveit_interfaces.srv import MoveToFrame 
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from ruamel.yaml import YAML
from koordinate.srv import ReadYaml
from calibration_interface.srv import CalibrateGripper
import cv2
import transforms3d
import time


class MoveToolToFrame(rclpy.node.Node):

    def __init__(self):
        super().__init__('move_tool_to_frame_service')

        # self.notok = True
        # self.notreadytosave = True
        # self.notreadytocalibrate = True

        # self.service = self.create_service(CalibrateGripper,'calibrate_gripper_server',self.start_calibration_callback)


        self.client = self.create_client(MoveToFrame, '/pm_moveit_server/move_tool_to_frame')

        # self.client2 = self.create_client(ReadYaml,"read_yaml")
        
        while not self.client.wait_for_service(timeout_sec=1.0):
           self.get_logger().info('pm_moveit_server not available, waiting again...')

        # while not self.client2.wait_for_service(timeout_sec=1.0):
        #    self.get_logger().info('read_yaml_server not available, waiting again...')

        
        # self.req2 = ReadYaml.Request()

        self.br = CvBridge()
        
        self.list = []
        self.r = 0 
        self.R = 0   


        m = self.send_move_request()

        if m.success == True:
            self.get_logger().info('wwwwwww')


            # zusammen unten zwei
            self.sub = self.create_subscription(Image,'/Image_Cam2_raw',self.image_callback, 10)
            n = self.send_rotate_request()
            
       
        

    def start_calibration_callback(self,request,response):
        self.get_logger().info('2222222222222222')


        if request.excute_calibration:
            self.get_logger().info('11111111111111111111111')
            response.success = True # logik for success, self.parameter in bildverarbeitung ,...or success means excution starts successfully

            # request.excute_calibration = False
            self.get_logger().info('ssss')
            # self.notreadytocalibrate = False
            
            

        return response
        

    def image_callback(self, data):
        img = self.br.imgmsg_to_cv2(data)

        # print(img.shape)

        img2 = img[150:300, 400:580]

        median = cv2.medianBlur(img2,9)

        canny1 = cv2.Canny(img2, 50, 150, apertureSize=3, L2gradient=True)

        canny2 = cv2.Canny(median, 50, 150, apertureSize=3, L2gradient=True)

        contours, _ = cv2.findContours(canny2, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)  
        cv2.drawContours(img2, contours, -1, (0, 255, 0), 1)
        # ellipse = []
        # x = 0
        # y = 0
        # m1 = 0
        # m2 = 0
        # r = 0
          
        # # self.col = cv2.cvtColor(img, cv2.COLOR_GRAY2BGR)

        # for i in range(len(contours)): 

        #     if len(contours[i]) >= 100 and len(contours[i]) <= 500:
  
        #         retval = cv2.fitEllipseDirect(contours[i])          
                
        #         if retval[1][0] > 105.0 and retval[1][1] < 120.0 and (retval[1][1]-retval[1][0]) <= 5:

        #             cv2.ellipse(img, retval, (0, 0, 255), 1) 
        #             cv2.circle(img, (int(retval[0][0]),int(retval[0][1])),1, (0, 0, 255), -1)

        #             ellipse.append(retval)
        #             x += retval[0][0]
        #             y += retval[0][1]

        #             r += (retval[1][0]/2 + retval[1][1]/2)/2
                  
        # if len(ellipse) != 0: 
        #     m1 += x/len(ellipse)
        #     m2 += y/len(ellipse)
        #     self.r += r/len(ellipse)
           
        # self.list.append([m1,m2])
        # self.R = self.r/len(self.list)
            
        # for point in self.list:
        
        #     cv2.circle(img, (int(point[0]), int(point[1])), 1, (0, 0, 255), -1)

        
        cv2.namedWindow('Circle',0)
        cv2.resizeWindow('Circle',1000,1000)
        cv2.imshow('Circle', img2)

        # cv2.namedWindow('Circle1',0)
        # cv2.resizeWindow('Circle1',1000,1000)
        # cv2.imshow('Circle1',median)

        # cv2.namedWindow('Circle2',0)
        # cv2.resizeWindow('Circle2',1000,1000)
        # cv2.imshow('Circle2', canny1)

        # cv2.namedWindow('Circle3',0)
        # cv2.resizeWindow('Circle3',1000,1000)
        # cv2.imshow('Circle3', canny2)

        cv2.waitKey(1)

    def send_move_request(self):
        # while self.notreadytocalibrate:
            # self.get_logger().info('11111111111111111111111')
        # if self.notreadytocalibrate == False:
        #     self.get_logger().info('break')
                # break
        
        # if: ob das ist sinnvoll
        self.req = MoveToFrame.Request()
        
        self.req.target_frame = 'Camera_Station_TCP'
        self.req.execute_movement = True
        self.req.translation.x = 0.0
        self.req.translation.y = 0.0
        self.req.translation.z = 0.0
        
        
        self.future1 = self.client.call_async(self.req)

        self.get_logger().info('Sending the movement request...')
        # if error in movit server ...

        rclpy.spin_until_future_complete(self, self.future1)
        
        # time.sleep(3.0)

        # self.save_yaml()
       
        return self.future1.result()


    def send_rotate_request(self):
        self.req3 = MoveToFrame.Request()
        self.req3.target_frame = 'PM_Robot_Tool_TCP'
        self.req3.execute_movement = True

        self.get_logger().info('Sending the rotation request...')
        q = transforms3d.euler.euler2quat(ai= 0.0, aj= 0.0, ak = 30.0, axes= 'sxyz')
       
        self.req3.rotation.x = q[1]
        self.req3.rotation.y = q[2]
        self.req3.rotation.z = q[3]
        self.req3.rotation.w = q[0]
        # self.get_logger().info('%s,%s,%s,%s'%(x,y,z,w))
        
        self.future3 = self.client.call_async(self.req3)
        rclpy.spin_until_future_complete(self, self.future3)

        
        
        return self.future3.result()






        
    def send_read_yaml_request(self):
        # while self.notok:
        #     # log info...
        #     if  self.notok == False:
        #         break
        
        self.req2.execute_read = True
       
        self.future2 = self.client2.call_async(self.req2)

        self.get_logger().info('Sending the adaptation request...')

        # rclpy.spin_until_future_complete(self, self.future2)

        return self.future2.result()

    def save_yaml(self):
        # while self.notreadytosave:
        #     # log info...
        #     if  self.notreadytosave == False:
        #         break
        
        yaml = YAML()
   
        with open ("/home/pmlab/yueju/offset.yaml"
            , "r") as file:
            joint_calibration = yaml.load(file)
                                                                
            joint_calibration['PM_Robot_Tool_TCP_Joint']['x_offset'] = 0.3
            joint_calibration['PM_Robot_Tool_TCP_Joint']['y_offset'] = 0.4

        with open('/home/pmlab/yueju/offset.yaml','w') as new_file:
            yaml.dump(joint_calibration, new_file)
        
        self.notok = False
        
        self.get_logger().info('YAML file updated successful!')
       
        self.send_read_yaml_request()
        

def main():
    rclpy.init()

    
    

    # response1 = client.send_move_request()
    # # response2 = client.send_read_yaml_request()

    # if response1.success == True:
    #     client.get_logger().info('THIS IS %s'%response1.joint_names)

    # if response2.success == True:
    #     client.get_logger().info('The offset is adapted!')
    # else:
    #     client.get_logger().info('The adaptation failed!')

    rclpy.spin(MoveToolToFrame())
    
    rclpy.shutdown()
if __name__ == '__main__':
    main()