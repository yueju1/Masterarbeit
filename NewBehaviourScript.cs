using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ROS2;
using YamlDotNet.Serialization;
using System.IO;
using koordinate.srv;
using UnityEditor.Compilation;
using TMPro;

/// <summary>
/// An example class provided for testing of basic ROS2 service
/// </summary>
public class Read : MonoBehaviour
{   
    public string FilePath = "/home/pmlab/yueju/offset.yaml";
    public float x_offset;
    public float y_offset;
    public float z_offset;
    

    bool move = false;
    private ROS2UnityComponent ros2Unity;
    private ROS2Node ros2Node;
    private IService<ReadYaml_Request, ReadYaml_Response>readYamlService;

    void Start()
    {   
        load_yaml();

        ros2Unity = GetComponent<ROS2UnityComponent>();
        if (ros2Unity.Ok())
        {
            if (ros2Node == null)
            {
                ros2Node = ros2Unity.CreateNode("read_yaml_server");
                readYamlService = ros2Node.CreateService<ReadYaml_Request, ReadYaml_Response>(
                    "read_yaml", readYaml);

                Debug.Log("read_yaml_server started!");
            }
        }
    }
                                    
    public ReadYaml_Response readYaml( ReadYaml_Request msg)
    {   
        Debug.Log("Adaptation request received!");

        ReadYaml_Response response = new ReadYaml_Response();
        
        if (msg.Execute_read)
        {   
            move = true;
            response.Success = true;
        }

        else
        {
            response.Success = false;
        }
        
        return response;
    }


    void Update()
    {
        if (move)
        {   
            move = false;
            load_yaml();  
        }


    }

    void load_yaml()
    {
        Debug.Log("Adapting the offset...");

        if (string.IsNullOrEmpty(FilePath))
        {
            Debug.LogError("YAML file path is not specified.");
            return;
        }

        string yamlContent = File.ReadAllText(FilePath);

        Deserializer deserializer = new Deserializer();

        Dictionary<string, object> objectData = deserializer.Deserialize<Dictionary<string, object>>(new StringReader(yamlContent));

        var positionData = (Dictionary<object, object>)objectData["PM_Robot_Tool_TCP_Joint"];
    
        x_offset = float.Parse(positionData["x_offset"].ToString());
        y_offset = float.Parse(positionData["y_offset"].ToString());
        z_offset = float.Parse(positionData["z_offset"].ToString());

        transform.localPosition = new Vector3(x_offset, y_offset, z_offset);

        Debug.Log("The Adaptation succeed!");
    }



}
