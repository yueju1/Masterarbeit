using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ROS2;

using addTwoIntsReq = example_interfaces.srv.AddTwoInts_Request;
using addTwoIntsResp = example_interfaces.srv.AddTwoInts_Response;
using koordinate.srv;
using System;
using JetBrains.Annotations;
using UnityEngine.UIElements;
using System.Security.Cryptography.X509Certificates;
using Unity.VisualScripting;
using System.Runtime.CompilerServices;

/// <summary>
/// An example class provided for testing of basic ROS2 service
/// </summary>
public class changing : MonoBehaviour
{
    private ROS2UnityComponent ros2Unity;
    private ROS2Node ros2Node;
    private IService<addTwoIntsReq, addTwoIntsResp> addTwoIntsService;
    private IService<Newkoord_Request, Newkoord_Response> changePositionService;

    float w ;
    float e ;
    float r ;
    
    float speed = 50f;
    bool move = false;
    
    void Start()
    {   
        // Vector3 v1 = 

        ros2Unity = GetComponent<ROS2UnityComponent>();
        if (ros2Unity.Ok())
        {   
            Debug.Log("111111111111111111111111111111111");
            if (ros2Node == null)
            {
                ros2Node = ros2Unity.CreateNode("ROS2UnityService");
                // addTwoIntsService = ros2Node.CreateService<addTwoIntsReq, addTwoIntsResp>(
                //     "add_two_ints", addTwoInts);
                
                changePositionService = ros2Node.CreateService<Newkoord_Request, Newkoord_Response>("change_position",changePosition);
                // current position send back to ros2
            }
        }

        // Vector3 goal = new Vector3(w, e, r);
        // dow(goal);
    }
    public Newkoord_Response changePosition(Newkoord_Request msg)
    {   
        
        // transform.position = new Vector3(2, 0, 0);
        // Newkoord_Response respon = new Newkoord_Response();
        
        Newkoord_Response response = new Newkoord_Response();
        
        Debug.Log("this is " + msg.A + " and "+ msg.B + " and "+ msg.C);
        
        w = msg.A;
        e = msg.B;
        r = msg.C;

        move = true;
        
        response.X = msg.A - msg.B;
        // vielleicht mehre response
        return response;
        
    }
    // void dow(Vector3 targ)
    // {   
    //     Debug.Log("ssssssssssssssssssss");
    //     Vector3 goal = new Vector3(w, e, r);
    //     // Debug.Log("{0}",e);
    //     // transform.localPosition = goal;
    //     if (transform.localPosition != targ)
    //         {

    //             float distance = speed * Time.deltaTime;

            
    //                 // transform.Translate(direction.normalized * distance);
    //                 // transform.localPosition = Vector3.MoveTowards(transform.localPosition, goal, distance);
    //                 // transform.localPosition = transform.localPosition + goal;
    //                 transform.localPosition = goal;
    //                 Debug.Log("qweqweqweqwe");
                    
    //         }
    // }


    
    // public example_interfaces.srv.AddTwoInts_Response addTwoInts( example_interfaces.srv.AddTwoInts_Request msg)
    // {   
        
    //     Debug.Log("Incoming Service Request A=" + msg.A + " B=" + msg.B);
    //     example_interfaces.srv.AddTwoInts_Response response = new example_interfaces.srv.AddTwoInts_Response();
    //     response.Sum = msg.A + msg.B;
    //     return response;
    // }
    
    void Update()
    {   
        if (move == true)
        {   move = false;
            Vector3 goal = new Vector3(w, e, r);

            Vector3 direction = goal - transform.localPosition;
            // transform.localPosition = goal;

            if (transform.localPosition != goal)
            {
                    // transform.Translate(direction.normalized * distance);
                    // transform.localPosition = Vector3.MoveTowards(transform.localPosition, goal, distance);
                    // transform.localPosition = transform.localPosition + goal;
                    transform.localPosition = goal;
                    Debug.Log("qweqweqweqwe");
                    
            }
            Debug.Log("9999999999999999999999999999999999999999999999999");
            
        
        }
        
    }



} 