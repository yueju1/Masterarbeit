using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ROS2;
using System.Threading.Tasks;
using addTwoIntsReq = example_interfaces.srv.AddTwoInts_Request;
using addTwoIntsResp = example_interfaces.srv.AddTwoInts_Response;
using koordinate.srv;
using System;
using JetBrains.Annotations;
using UnityEngine.UIElements;
using System.Security.Cryptography.X509Certificates;
using Unity.VisualScripting;
using System.Runtime.CompilerServices;
using Unity.VisualScripting.FullSerializer;
using UnityEngine.Analytics;


public class ChangePosition : MonoBehaviour
{   
    private ROS2UnityComponent ros2Unity;
    private ROS2Node ros2Node;
    private IService<Newkoord_Request, Newkoord_Response> changePositionService;
    private IClient<Newkoord_Request, Newkoord_Response> changePositionClient;
    private Task<Newkoord_Response> asyncTask;
    float w;
    float e;
    float r;
    public float x_offset_current;
    public float y_offset_current;
    public float z_offset_current;
    bool move = false;
    bool notArrived = true;
    private bool isRunning = true;
    private Vector3 previous;
    private float p1;
    private float p2;
    private float p3;
    

    void Start()
    {   
        ros2Unity = GetComponent<ROS2UnityComponent>();
        if (ros2Unity.Ok())
        {

            if (ros2Node == null)
            {
                ros2Node = ros2Unity.CreateNode("Vacuumtool_change_position_service");

                changePositionService = ros2Node.CreateService<Newkoord_Request, Newkoord_Response>("change_position", changePosition);

                changePositionClient = ros2Node.CreateClient<Newkoord_Request, Newkoord_Response>("change_position");
                
                Debug.Log("change_position service starts!");

                

            }
        }

    }

    public Newkoord_Response changePosition(Newkoord_Request msg)
    {
        
        Newkoord_Response response = new Newkoord_Response();

        Debug.Log("The goal position is: (" + msg.A + ", " + msg.B + ", " + msg.C + ")"); // local + offset

        move = true;
        // if(x_offset_current != p1)
        // {w = msg.A;
        // }
        // else if(y_offset_current != p2)
        // {w = msg.A}
        // else if(z_offset_current != p3)
        // {r = msg.C;}
        w = msg.A;
        e = msg.B;
        r = msg.C;

        previous = new Vector3(w, e, r);
        p1 = w;
        p2 = e;
        p3 = r;

        while (notArrived)
        {   
            if(!notArrived)
            {
                break;
            }
        }

        response.X = true;

        return response;

    }

    void Update()
    {   
        Vector3 offset = new Vector3(x_offset_current, y_offset_current, z_offset_current);
        
        // if (offset != previous)
        // { 
        //     isRunning = false;
        //     Debug.Log("diffffffffffffffffffffffffffffffffffffffffffffferent");
        // }

        // if (!isRunning && offset != previous)
        // {
        //     Newkoord_Request request = new Newkoord_Request();
        //     // if( x_offset_current != p1)
        //     // {
        //     //     request.A = x_offset_current;
        //     //     asyncTask = changePositionClient.CallAsync(request);
                
        //     // }

        //     // if(y_offset_current != p2)
        //     // {
        //     //     request.B = y_offset_current;
        //     //     asyncTask = changePositionClient.CallAsync(request);
        //     // }
        //     // if(z_offset_current != p3)
        //     // {
        //     //     request.C = z_offset_current;
        //     //     asyncTask = changePositionClient.CallAsync(request);
        //     // }
             
        //     request.A = x_offset_current;
        //     request.B = y_offset_current;
        //     request.C = z_offset_current;
        //     asyncTask = changePositionClient.CallAsync(request);
        //     asyncTask.ContinueWith((task) => { Debug.Log("Got async answer " + task.Result.X); });

        //     isRunning = true;
        
        // }

        if (!isRunning)
        {Newkoord_Request request = new Newkoord_Request();
        request.A = x_offset_current;
        request.B = y_offset_current;
        request.C = z_offset_current;
        asyncTask = changePositionClient.CallAsync(request);
        asyncTask.ContinueWith((task) => { Debug.Log("Got async answer " + task.Result.X); });

        isRunning = true;
        }



        // if (offset == previous)
        // {
        //     isRunning = false;
        // }

        if (move == true)
        {   
            Vector3 goal = new Vector3(w, e, r);

            move = false;

            Debug.Log("Changing the position...");

            Transform obj = GetComponent<Transform>();
            Vector3 cupo = obj.localPosition;
            

            // // if (transform.localPosition != goal)
            // // {
            // if(x_offset_current != p1)
            // {cupo.x = w;}
            // if(y_offset_current != p2)
            // {cupo.y = e;}
            // if(z_offset_current != p3)
            // {cupo.z = r;}
            // //}


            
            if (transform.localPosition != goal)
            {
                // die bekommende realative Position. Offset or koordinate? (interface name aendern)
                transform.localPosition = goal;

            }

            if (transform.localPosition == new Vector3(w, p2 , p3))
            {
                notArrived = false;
                Debug.Log("The goal achieved!");
            }

        }

    }

}