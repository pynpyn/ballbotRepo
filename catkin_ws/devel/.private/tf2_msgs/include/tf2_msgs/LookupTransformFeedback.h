// Generated by gencpp from file tf2_msgs/LookupTransformFeedback.msg
// DO NOT EDIT!


#ifndef TF2_MSGS_MESSAGE_LOOKUPTRANSFORMFEEDBACK_H
#define TF2_MSGS_MESSAGE_LOOKUPTRANSFORMFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tf2_msgs
{
template <class ContainerAllocator>
struct LookupTransformFeedback_
{
  typedef LookupTransformFeedback_<ContainerAllocator> Type;

  LookupTransformFeedback_()
    {
    }
  LookupTransformFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct LookupTransformFeedback_

typedef ::tf2_msgs::LookupTransformFeedback_<std::allocator<void> > LookupTransformFeedback;

typedef boost::shared_ptr< ::tf2_msgs::LookupTransformFeedback > LookupTransformFeedbackPtr;
typedef boost::shared_ptr< ::tf2_msgs::LookupTransformFeedback const> LookupTransformFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tf2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'tf2_msgs': ['/home/hdcl-ros/ballbotRepo/catkin_ws/src/geometry2/tf2_msgs/msg', '/home/hdcl-ros/ballbotRepo/catkin_ws/devel/.private/tf2_msgs/share/tf2_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf2_msgs/LookupTransformFeedback";
  }

  static const char* value(const ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
";
  }

  static const char* value(const ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LookupTransformFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::tf2_msgs::LookupTransformFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TF2_MSGS_MESSAGE_LOOKUPTRANSFORMFEEDBACK_H
