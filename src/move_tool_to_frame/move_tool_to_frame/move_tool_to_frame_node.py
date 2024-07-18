import cv2
import rclpy
import rclpy.logging
import rclpy.node
from pm_moveit_interfaces.srv import MoveToFrame 
import rclpy.parameter
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from ruamel.yaml import YAML
from interface_name.srv import ReadYaml
from calibration_interface.srv import CalibrateGripper
import cv2
import transforms3d
import time
from control_msgs.msg import JointTrajectoryControllerState
from circle_fit import hyperSVD
import math
import threading

class MoveToolToFrame(rclpy.node.Node):

    def __init__(self):
        super().__init__('move_tool_to_frame_service')
        
        self.ok = False
        # self.notreadytosave = True
        self.times = 1
        # self.node2 = rclpy.create_node("node2")
        self.service = self.create_service(CalibrateGripper,'calibrate_gripper_server',self.start_calibration_callback)

        self.client = self.create_client(MoveToFrame, '/pm_moveit_server/move_tool_to_frame')

        # self.client2 = self.create_client(ReadYaml,"read_yaml")
        
        while not self.client.wait_for_service(timeout_sec=1.0):
           self.get_logger().info('pm_moveit_server not available, waiting again...')
        self.get_logger().info('server connected')
        # while not self.client2.wait_for_service(timeout_sec=1.0):
        #    self.get_logger().info('read_yaml_server not available, waiting again...')

        
        # self.req2 = ReadYaml.Request()

        self.br = CvBridge()

        
        self.list = []
        self.r = 0 
        self.R = 0   
        self.reached_joint_number = 0
        
        # self.send_rotate_request()
        
        # if m.success == True:
        #     self.get_logger().info('wwwwwww')


        # while self.notreadytocalibrate:
                
        #         if self.notreadytocalibrate == False:
        #             self.get_logger().info('break')
        #             break

        # self.send_move_request()
        # self.get_logger().info('11111111111111111111111')
        
        # time.sleep(2.0)
        # self.get_logger().info('111111222222222222222222222222222221111')
        # self.send_rotate_request()
        # self.get_logger().info('3333333')
        
        # self.declare_parameter('ok',value=0)
        
        
    def start_calibration_callback(self,request,response):
        self.notreadytocalibrate = False
        if request.excute_calibration:
            self.get_logger().info('11111111111111111111111')
            # self.set_parameters([rclpy.Parameter('ok',value=1)])
            
            # time.sleep(2.0)
            # self.sub = self.create_subscription(JointTrajectoryControllerState,
            #                                 "pm_robot_xyz_axis_controller/state",
            #                                 self.state_callback,
            #                                 10)
            self.send_move_request()
            self.sub = self.create_subscription(Image,'/Image_Cam2_raw',self.image_callback, 10)
            self.timer = self.create_timer(1,self.check_callback)
            
            
            # self.save_yaml()
            
            response.success = True # logik for success, self.parameter in bildverarbeitung ,...or success means excution starts successfully
            
        return response
        
    
    def check_callback(self):
       
        if self.ok:
            # self.sub = self.create_subscription(Image,'/Image_Cam2_raw',self.image_callback, 10)
            self.get_logger().info('state_callback')
            self.ok = False
            self.notreadytocalibrate = False
            self.save_yaml()
            self.timer.cancel()
            # self.send_rotate_request()
            
           
        else:
            self.get_logger().info('failed failed failed')


    
    # def state_callback(self,msg): 
    #     self.get_logger().info('state_callback')
        
    #     for i in range(len(msg.desired.positions)):     
    #         # self.get_logger().info('qqqqqqqqqqqqqqqqqqqqq')
    #         if msg.desired.positions.tolist() == [-0.35950000000000176,-0.045816999999999705, 0.0190799999999959] and -0.000001 < msg.error.positions[i] < 0.000001:       
    #             self.get_logger().info('Reached joint number:%s'%self.reached_joint_number)
    #             if self.reached_joint_number <= i:

    #                 self.reached_joint_number += 1
              
                
        
    #     if self.reached_joint_number == 3:
            
    #         # self.set_parameters([rclpy.Parameter('ok',value=1)])

    #         self.notreadytocalibrate = True
            

    def send_move_request(self):
        # while self.notreadytocalibrate:
        #     self.get_logger().info('11111111111111111111111')
        #     if self.notreadytocalibrate == False:
        #         self.get_logger().info('break')
        #         break
        
        # if: ob das ist sinnvoll

        req = MoveToFrame.Request()
        
        req.target_frame = 'Camera_Station_TCP'
        req.execute_movement = True
        req.translation.x = 0.0
        req.translation.y = 0.0
        req.translation.z = 0.0
        
        
        future1 = self.client.call_async(req)

        self.get_logger().info('Sending the movement request...')
        # if error in movit server ...
        # while self.future1.done() != True:
        
        #     # self.get_logger().info('3333')
        # self.notreadytocalibrate = False
        
        # rclpy.spin_until_future_complete(self, self.future1)
        future1.add_done_callback(self.done_callback)

        
        
        return future1.result()

    def done_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info("success message here %s"%(response.success))
            if response.success:
                self.notreadytocalibrate = True
                # self.sub = self.create_subscription(Image,'/Image_Cam2_raw',self.image_callback, 10)
                self.send_rotate_request()
                # self.notreadytocalibrate = False
        except Exception as err:
            self.get_logger().error("service call failed %r" % (err))


    
    def send_rotate_request(self):
        
        if self.notreadytocalibrate:           
                                                                             
            # break

            req3 = MoveToFrame.Request()
            req3.target_frame = 'PM_Robot_Tool_TCP'
            req3.execute_movement = True

            self.get_logger().info('Sending the rotation request...')
            q = transforms3d.euler.euler2quat(ai= 0.0, aj= 0.0, ak = 30.0, axes= 'sxyz')
        
            req3.rotation.x = q[1]
            req3.rotation.y = q[2]
            req3.rotation.z = q[3]
            req3.rotation.w = q[0]
            # self.get_logger().info('%s,%s,%s,%s'%(x,y,z,w))
            
            future3 = self.client.call_async(req3)



            # rclpy.spin_until_future_complete(self.node2, future3)

            future3.add_done_callback(self.calculate_callback)
            


            return future3.result()


    def calculate_callback(self,future): 
        try:
            response = future.result()
            self.get_logger().info("success  there %s"%(response.success))
            
            if response.success:
                self.get_logger().info('g1g1g1g1g1g1g11g1g1')
                self.real_pixel_size = 2.2
                # self.sim_pixel_size = 250/self.R
                
                # if self.mode == '1':
                    
                #     self.pixel_size = self.real_pixel_size

                # elif self.mode == '2':
                    
                #     self.pixel_size = self.sim_pixel_size
                
                self.xr,self.yr,self.e,_ = hyperSVD(self.list)
                
                cv2.circle(self.median, (int(self.xr),int(self.yr)),1, (0, 0, 255), -1)
                cv2.circle(self.median, (int(self.xr),int(self.yr)),int(self.e), (0, 0, 255), 1)

                
                self.error = (self.list[0][0]-float(self.xr), self.list[0][1]-float(self.yr))
                square = self.error[0]*self.error[0]+self.error[1]*self.error[1]
                deviation = math.sqrt(square)*self.real_pixel_size

                self.get_logger().info('Predicted center of the red plate in the image coordinate : ({0},{1})'.format(self.xr,self.yr))
                self.get_logger().info('Position of the vacuum gripper relative to the red plate: ({0},{1}) (µm)'.format
                                        (self.error[0]*self.real_pixel_size, -self.error[1]*self.real_pixel_size))             
                self.get_logger().info('The error is: {0} µm'.format(deviation))   
                self.ok = True
                # self.save_yaml()  
                cv2.namedWindow('Circle%d'%self.times,0)
                cv2.resizeWindow('Circle%d'%self.times,1000,1000)
                cv2.imshow('Circle%d'%self.times, self.median)


                self.key = cv2.waitKey(0)
                
                        
        except Exception as err:
            self.get_logger().error("service call failed %r" % (err))
                                                                                    

    def image_callback(self, data):
        self.get_logger().info('calback callback call back')
            
        img = self.br.imgmsg_to_cv2(data)
        
        # self.get_logger().info('g1g1g1g1g1g1g11g1g1')

        # print(img.shape)

        # img2 = img[150:300, 400:580]

        # img2 = img[175:340, 630:810]

        img2 = img[500:1480, 1500:2450]
        
        self.col = cv2.threshold(img2, 244, 255, cv2.THRESH_BINARY)[1]


        cv2.namedWindow('Circle',0)
        cv2.resizeWindow('Circle',1000,1000)
        cv2.imshow('Circle', img)

        qwe = cv2.waitKey(1)

        if qwe != -1:
            self.call.cancel()
            cv2.destroyAllWindows()
            self.destroy_subscription(self.sub)

        if self.notreadytocalibrate:

            self.median = cv2.medianBlur(self.col,5)
           
            canny1 = cv2.Canny(img2, 50, 150, apertureSize=3, L2gradient=True)

            # canny2 = cv2.Canny(self.median, 50, 150, apertureSize=3, L2gradient=True)   
            canny2 = cv2.Canny(self.median, 700, 830, apertureSize=3, L2gradient=True)

            contours, _ = cv2.findContours(canny2, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)  
            # cv2.drawContours(self.median, contours, -1, (0, 255, 0), 1)
            # print(contours)
            self.ellipse = []
            self.x = 0
            self.y = 0
            self.m1 = 0
            self.m2 = 0
            self.rr = 0
            
            for i in range(len(contours)): 
        
                if len(contours[i]) >= 70 and len(contours[i]) <= 100:
                    
                    # print("length:",len(contours[i]))
                    retval = cv2.fitEllipseDirect(contours[i])  
                    if retval[1][0] < 80 and retval[1][0] > 10:        
                       cv2.drawContours(self.median, contours[i], -1, (0, 255, 0), 1)
            
            # #         if retval[1][0] > 105.0 and retval[1][1] < 120.0 and (retval[1][1]-retval[1][0]) <= 5:
            #         if retval[1][0] > 10 and retval[1][0]< 80: 
            #             cv2.circle(self.median, (int(retval[0][0]), int(retval[0][1])), 1, (0, 0, 255), -1)
            #             print("retval",retval) 
            #             print("length:",len(contours[i]))


            for i in range(len(contours)): 
                
                if len(contours[i]) >= 70 and len(contours[i]) <= 100:
                    # print("length:",len(contours[i]))
                    retval = cv2.fitEllipseDirect(contours[i])  
                    # if retval[1][0] < 50 and retval[1][0] > 10:        
                    # print("retval",retval)    
                    # cv2.circle(self.median, (int(retval[0][0]), int(retval[0][1])), 1, (0, 0, 255), -1)
            #         if retval[1][0] > 105.0 and retval[1][1] < 120.0 and (retval[1][1]-retval[1][0]) <= 5:
                    if retval[1][0] > 10 and retval[1][0]< 80:


                        cv2.ellipse(self.median, retval, (0, 0, 255), 1) 
                        cv2.circle(self.median, (int(retval[0][0]),int(retval[0][1])),1, (0, 0, 255), -1)

                        self.ellipse.append(retval)
                        self.x += retval[0][0]
                        self.y += retval[0][1]

                        self.rr += (retval[1][0]/2 + retval[1][1]/2)/2
                    
            if len(self.ellipse) != 0: 
                self.m1 += self.x/len(self.ellipse)
                self.m2 += self.y/len(self.ellipse)
                self.r += self.rr/len(self.ellipse)
            
            self.list.append([self.m1,self.m2])
            self.R = self.r/len(self.list)
                
            for point in self.list:
            
                cv2.circle(self.median, (int(point[0]), int(point[1])), 1, (0, 0, 255), -1)

            cv2.namedWindow('Circle%d'%self.times,0)
            cv2.resizeWindow('Circle%d'%self.times,1000,1000)
            cv2.imshow('Circle%d'%self.times, self.median)


                # cv2.namedWindow('Circle2',0)
                # cv2.resizeWindow('Circle2',1000,1000)
                # cv2.imshow('Circle2', canny1)

                # cv2.namedWindow('Circle3',0)
                # cv2.resizeWindow('Circle3',1000,1000)
                # cv2.imshow('Circle3', canny2)

            cv2.waitKey(1)
           
            


            
    def save_yaml(self):
        # if self.key == ord('s'):
        #     cv2.destroyAllWindows()
        #     self.destroy_subscription(self.sub)

        # for point in self.list:
            
        #         cv2.circle(self.asd, (int(point[0]), int(point[1])), 1, (255, 255, 255), -1)
        self.list = []
        self.r = 0 
        self.R = 0 
        self.ellipse = []
        self.x = 0
        self.y = 0
        self.m1 = 0
        self.m2 = 0
        self.rr = 0

        if self.key != -1:
            
            cv2.destroyAllWindows()
            self.destroy_subscription(self.sub)
        else:
            self.print_message()
            self.get_logger().error('select and pre any key!')
            
            
        # if self.key == ord('s'):
        #     self.sub.destroy()
        #     self.get_logger().info('okkkkkkkkkkkkkkkk')
        
        yaml = YAML()
   
        with open ("/home/pmlab/yueju/offset.yaml"
            , "r") as file:
            joint_calibration = yaml.load(file)
                                                                
            joint_calibration['PM_Robot_Tool_TCP_Joint']['x_offset'] = 0.3
            joint_calibration['PM_Robot_Tool_TCP_Joint']['y_offset'] = 0.4

        with open('/home/pmlab/yueju/offset.yaml','w') as new_file:
            yaml.dump(joint_calibration, new_file)
        
        
        
        self.get_logger().info('YAML file updated successful!')
       
        # self.send_read_yaml_request()
        self.times += 1
    def print_message(self):
        self.get_logger().error("Printing every 1 second")
        # Schedule the function to run again after 1 second
        self.call = threading.Timer(1, self.print_message)
        self.call.start()


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
