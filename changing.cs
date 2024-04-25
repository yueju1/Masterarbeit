using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ROS2;

using addTwoIntsReq = example_interfaces.srv.AddTwoInts_Request;
using addTwoIntsResp = example_interfaces.srv.AddTwoInts_Response;
// using koordinate.srv;
using interface_name.srv;
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
    private IService<NewKoord_Request, NewKoord_Response> changePositionService;

    float w;
    float e;
    float r;

    bool move = false;
    bool arrive = false;
    void Start()
    {
        // Vector3 v1 = 

        ros2Unity = GetComponent<ROS2UnityComponent>();
        if (ros2Unity.Ok())
        {

            if (ros2Node == null)
            {
                ros2Node = ros2Unity.CreateNode("Vacuumtool_change_position_Service");
                // addTwoIntsService = ros2Node.CreateService<addTwoIntsReq, addTwoIntsResp>(
                //     "add_two_ints", addTwoInts);

                changePositionService = ros2Node.CreateService<NewKoord_Request, NewKoord_Response>("change_position", changePosition);
                // current position send back to ros2
                Debug.Log("111111111111111111111111111111111");
            }
        }

    }
    public NewKoord_Response changePosition(NewKoord_Request msg)
    {

        NewKoord_Response response = new NewKoord_Response();

        Debug.Log("this is " + msg.A + " and " + msg.B + " and " + msg.C);

        w = msg.A;
        e = msg.B;
        r = msg.C;

        move = true;
        if (arrive == true)
        {
            response.X = msg.A - msg.B;
        }






        // vielleicht mehre response
        return response;

    }

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
        {
            move = false;

            Debug.Log("Changing the position...");
            Vector3 goal = new Vector3(w, e, r);

            if (transform.localPosition != goal)
            {
                // die bekommende realative Position. Offset or koordinate?
                transform.localPosition = goal;

            }

            if (transform.localPosition == goal)
            {
                arrive = true;
                Debug.Log("The goal achieved!");
            }

        }

    }

}