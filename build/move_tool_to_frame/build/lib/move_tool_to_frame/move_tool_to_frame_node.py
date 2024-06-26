import rclpy
import rclpy.node
from pm_moveit_interfaces.srv import MoveToFrame 
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from ruamel.yaml import YAML
from koordinate.srv import ReadYaml
from calibration_interface.srv import CalibrateGripper



class MoveToolToFrame(rclpy.node.Node):

    def __init__(self):
        super().__init__('move_tool_to_frame_service')

        self.notok = True
        self.notreadytosave = True
        self.notreadytocalibrate = True

        self.service = self.create_service(CalibrateGripper,'calibrate_gripper_server',self.start_calibration_callback)


        self.client = self.create_client(MoveToFrame, '/pm_moveit_server/move_tool_to_frame')
        self.client2 = self.create_client(ReadYaml,"read_yaml")
        
        while not self.client.wait_for_service(timeout_sec=1.0):
           self.get_logger().info('pm_moveit_server not available, waiting again...')

        # while not self.client2.wait_for_service(timeout_sec=1.0):
        #    self.get_logger().info('read_yaml_server not available, waiting again...')

        self.req = MoveToFrame.Request()
        self.req2 = ReadYaml.Request()
        self.br = CvBridge()
        
        # self.sub = self.create_subscription(Image,'/Cam2/image_raw',self.image_callback, 10)

        
        


    def start_calibration_callback(self,request,response):
        self.get_logger().info('2222222222222222')


        if request.excute_calibration:
            self.get_logger().info('11111111111111111111111')
            response.success = True # logik for success, self.parameter in bildverarbeitung ,...or success means excution starts successfully

            # request.excute_calibration = False
            self.get_logger().info('ssss')
            # self.notreadytocalibrate = False
            self.send_move_request()
            

        return response
        

    def image_callback(self, data):
        img = self.br.imgmsg_to_cv2(data)
        cv2.namedWindow('Circle',0)
        cv2.resizeWindow('Circle',1000,1000)
        cv2.imshow('Circle', img)
        cv2.waitKey(1)

    def send_move_request(self):
        # while self.notreadytocalibrate:
            # self.get_logger().info('11111111111111111111111')
        # if self.notreadytocalibrate == False:
        #     self.get_logger().info('break')
                # break
        
        # if: ob das ist sinnvoll

        self.req.target_frame = 'Camera_Station_TCP'
        self.req.execute_movement = True
        self.req.translation.x = 0.003
        self.req.translation.y = 0.01
        self.req.translation.z = 0.0
        #self.req.rotation.x = 5.0
        #self.req.rotation.y = 1.0
        #self.req.rotation.z = 2.0
        #self.req.rotation.w = 1.0
        
        self.future1 = self.client.call_async(self.req)

        self.get_logger().info('Sending the movement request...')
        # if error in movit server ...
        self.notreadytosave = False
        # rclpy.spin_until_future_complete(self, self.future1)
        self.save_yaml()
       
        return self.future1.result()
        
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

    client = MoveToolToFrame()
    # response1 = client.send_move_request()
    # response2 = client.send_read_yaml_request()

    # if response1.success == True:
    #     client.get_logger().info('THIS IS %s'%response1.joint_names)

    # if response2.success == True:
    #     client.get_logger().info('The offset is adapted!')
    # else:
    #     client.get_logger().info('The adaptation failed!')

    rclpy.spin(client)

    rclpy.shutdown()

if __name__ == '__main__':
    main()