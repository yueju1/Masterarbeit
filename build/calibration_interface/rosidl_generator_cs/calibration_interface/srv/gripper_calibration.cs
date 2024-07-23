// generated from rosidl_generator_cs/resource/idl.cs.em
// with input from calibration_interface:srv/GripperCalibration.idl
// generated code does not contain a copyright notice

//TODO (adamdbrw): include depending on what is needed
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ROS2;
using ROS2.Internal;





namespace calibration_interface
{
namespace srv
{
// message class
public class GripperCalibration_Request : MessageInternals, Message
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations

  // members
  public bool Execute_calibration { get; set; }
  public bool Calibration_sim { get; set; }
  public bool Calibration_real { get; set; }

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeGetTypeSupportType();
  private static NativeGetTypeSupportType native_get_typesupport = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeCreateNativeMessageType();
  private static NativeCreateNativeMessageType native_create_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeDestroyNativeMessageType(IntPtr messageHandle);
  private static NativeDestroyNativeMessageType native_destroy_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate bool NativeReadFieldExecute_calibrationType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldExecute_calibrationType(
    IntPtr messageHandle, bool value);


  private static NativeReadFieldExecute_calibrationType native_read_field_execute_calibration = null;
  private static NativeWriteFieldExecute_calibrationType native_write_field_execute_calibration = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate bool NativeReadFieldCalibration_simType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldCalibration_simType(
    IntPtr messageHandle, bool value);


  private static NativeReadFieldCalibration_simType native_read_field_calibration_sim = null;
  private static NativeWriteFieldCalibration_simType native_write_field_calibration_sim = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate bool NativeReadFieldCalibration_realType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldCalibration_realType(
    IntPtr messageHandle, bool value);


  private static NativeReadFieldCalibration_realType native_read_field_calibration_real = null;
  private static NativeWriteFieldCalibration_realType native_write_field_calibration_real = null;

  // This is done to preload before ros2 rmw_implementation attempts to find custom message library (and fails without absolute path)
  static private void MessageTypeSupportPreload()
  {
    if (RuntimeInformation.IsOSPlatform(OSPlatform.Linux))
    { //only affects Linux since on Windows PATH can be set effectively, dynamically
        const string rmw_fastrtps = "rmw_fastrtps_cpp";
        var rmw_implementation = Environment.GetEnvironmentVariable("RMW_IMPLEMENTATION");
        if (rmw_implementation == null)
        {
          var ros_distro = Environment.GetEnvironmentVariable("ROS_DISTRO");
          if (ros_distro == "galactic")
          { // no preloads for CycloneDDS, default for galactic
            return;
          }
          rmw_implementation = rmw_fastrtps; // default for all other distros
        }

        // TODO - generalize to Connext and other implementations
        if (rmw_implementation == rmw_fastrtps)
        { // TODO - get rcl level constants, e.g. rosidl_typesupport_fastrtps_c__identifier
          // Load typesupport for fastrtps (_c depends on _cpp)
          var loadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static GripperCalibration_Request()
  {
    Ros2csLogger logger = Ros2csLogger.GetInstance();

    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("calibration_interface_srv_gripper_calibration__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Request_native_get_type_support");
    GripperCalibration_Request.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Request_native_create_native_message");
    GripperCalibration_Request.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Request_native_destroy_native_message");
    GripperCalibration_Request.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_read_field_execute_calibration_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Request_native_read_field_execute_calibration");
    GripperCalibration_Request.native_read_field_execute_calibration =
      (NativeReadFieldExecute_calibrationType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_execute_calibration_ptr, typeof(NativeReadFieldExecute_calibrationType));

    IntPtr native_write_field_execute_calibration_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Request_native_write_field_execute_calibration");
    GripperCalibration_Request.native_write_field_execute_calibration =
      (NativeWriteFieldExecute_calibrationType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_execute_calibration_ptr, typeof(NativeWriteFieldExecute_calibrationType));
    IntPtr native_read_field_calibration_sim_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Request_native_read_field_calibration_sim");
    GripperCalibration_Request.native_read_field_calibration_sim =
      (NativeReadFieldCalibration_simType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_calibration_sim_ptr, typeof(NativeReadFieldCalibration_simType));

    IntPtr native_write_field_calibration_sim_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Request_native_write_field_calibration_sim");
    GripperCalibration_Request.native_write_field_calibration_sim =
      (NativeWriteFieldCalibration_simType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_calibration_sim_ptr, typeof(NativeWriteFieldCalibration_simType));
    IntPtr native_read_field_calibration_real_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Request_native_read_field_calibration_real");
    GripperCalibration_Request.native_read_field_calibration_real =
      (NativeReadFieldCalibration_realType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_calibration_real_ptr, typeof(NativeReadFieldCalibration_realType));

    IntPtr native_write_field_calibration_real_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Request_native_write_field_calibration_real");
    GripperCalibration_Request.native_write_field_calibration_real =
      (NativeWriteFieldCalibration_realType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_calibration_real_ptr, typeof(NativeWriteFieldCalibration_realType));
  }

  public IntPtr TypeSupportHandle
  {
    get
    {
      return native_get_typesupport();
    }
  }

  // Handle. Create on first use. Can be set for nested classes. TODO -- access...
  public IntPtr Handle
  {
    get
    {
      if (_handle == IntPtr.Zero)
        _handle = native_create_native_message();
      return _handle;
    }
  }

  public GripperCalibration_Request()
  {
  }

  public void ReadNativeMessage()
  {
    ReadNativeMessage(Handle);
  }

  public void ReadNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for reading");
    Execute_calibration = native_read_field_execute_calibration(handle);
    Calibration_sim = native_read_field_calibration_sim(handle);
    Calibration_real = native_read_field_calibration_real(handle);
  }

  public void WriteNativeMessage()
  {
    if (_handle == IntPtr.Zero)
    { // message object reused for subsequent publishing.
      // This could be problematic if sequences sizes changed, but me handle that by checking for it in the c implementation
      _handle = native_create_native_message();
    }

    WriteNativeMessage(Handle);
  }

  // Write from CS to native handle
  public void WriteNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for writing");
    native_write_field_execute_calibration(handle, Execute_calibration);
    native_write_field_calibration_sim(handle, Calibration_sim);
    native_write_field_calibration_real(handle, Calibration_real);
  }

  public void Dispose()
  {
    if (!disposed)
    {
      if (_handle != IntPtr.Zero)
      {
        native_destroy_native_message(_handle);
        _handle = IntPtr.Zero;
        disposed = true;
      }
    }
  }

  ~GripperCalibration_Request()
  {
    Dispose();
  }

};  // class GripperCalibration_Request
}  // namespace srv
}  // namespace calibration_interface




namespace calibration_interface
{
namespace srv
{
// message class
public class GripperCalibration_Response : MessageInternals, Message
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations

  // members
  public bool Success { get; set; }

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeGetTypeSupportType();
  private static NativeGetTypeSupportType native_get_typesupport = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeCreateNativeMessageType();
  private static NativeCreateNativeMessageType native_create_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeDestroyNativeMessageType(IntPtr messageHandle);
  private static NativeDestroyNativeMessageType native_destroy_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate bool NativeReadFieldSuccessType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldSuccessType(
    IntPtr messageHandle, bool value);


  private static NativeReadFieldSuccessType native_read_field_success = null;
  private static NativeWriteFieldSuccessType native_write_field_success = null;

  // This is done to preload before ros2 rmw_implementation attempts to find custom message library (and fails without absolute path)
  static private void MessageTypeSupportPreload()
  {
    if (RuntimeInformation.IsOSPlatform(OSPlatform.Linux))
    { //only affects Linux since on Windows PATH can be set effectively, dynamically
        const string rmw_fastrtps = "rmw_fastrtps_cpp";
        var rmw_implementation = Environment.GetEnvironmentVariable("RMW_IMPLEMENTATION");
        if (rmw_implementation == null)
        {
          var ros_distro = Environment.GetEnvironmentVariable("ROS_DISTRO");
          if (ros_distro == "galactic")
          { // no preloads for CycloneDDS, default for galactic
            return;
          }
          rmw_implementation = rmw_fastrtps; // default for all other distros
        }

        // TODO - generalize to Connext and other implementations
        if (rmw_implementation == rmw_fastrtps)
        { // TODO - get rcl level constants, e.g. rosidl_typesupport_fastrtps_c__identifier
          // Load typesupport for fastrtps (_c depends on _cpp)
          var loadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static GripperCalibration_Response()
  {
    Ros2csLogger logger = Ros2csLogger.GetInstance();

    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("calibration_interface__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("calibration_interface_srv_gripper_calibration__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Response_native_get_type_support");
    GripperCalibration_Response.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Response_native_create_native_message");
    GripperCalibration_Response.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Response_native_destroy_native_message");
    GripperCalibration_Response.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_read_field_success_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Response_native_read_field_success");
    GripperCalibration_Response.native_read_field_success =
      (NativeReadFieldSuccessType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_success_ptr, typeof(NativeReadFieldSuccessType));

    IntPtr native_write_field_success_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "calibration_interface__srv__GripperCalibration_Response_native_write_field_success");
    GripperCalibration_Response.native_write_field_success =
      (NativeWriteFieldSuccessType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_success_ptr, typeof(NativeWriteFieldSuccessType));
  }

  public IntPtr TypeSupportHandle
  {
    get
    {
      return native_get_typesupport();
    }
  }

  // Handle. Create on first use. Can be set for nested classes. TODO -- access...
  public IntPtr Handle
  {
    get
    {
      if (_handle == IntPtr.Zero)
        _handle = native_create_native_message();
      return _handle;
    }
  }

  public GripperCalibration_Response()
  {
  }

  public void ReadNativeMessage()
  {
    ReadNativeMessage(Handle);
  }

  public void ReadNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for reading");
    Success = native_read_field_success(handle);
  }

  public void WriteNativeMessage()
  {
    if (_handle == IntPtr.Zero)
    { // message object reused for subsequent publishing.
      // This could be problematic if sequences sizes changed, but me handle that by checking for it in the c implementation
      _handle = native_create_native_message();
    }

    WriteNativeMessage(Handle);
  }

  // Write from CS to native handle
  public void WriteNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for writing");
    native_write_field_success(handle, Success);
  }

  public void Dispose()
  {
    if (!disposed)
    {
      if (_handle != IntPtr.Zero)
      {
        native_destroy_native_message(_handle);
        _handle = IntPtr.Zero;
        disposed = true;
      }
    }
  }

  ~GripperCalibration_Response()
  {
    Dispose();
  }

};  // class GripperCalibration_Response
}  // namespace srv
}  // namespace calibration_interface

