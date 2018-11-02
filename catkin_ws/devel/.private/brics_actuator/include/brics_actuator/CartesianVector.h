// Generated by gencpp from file brics_actuator/CartesianVector.msg
// DO NOT EDIT!


#ifndef BRICS_ACTUATOR_MESSAGE_CARTESIANVECTOR_H
#define BRICS_ACTUATOR_MESSAGE_CARTESIANVECTOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace brics_actuator
{
template <class ContainerAllocator>
struct CartesianVector_
{
  typedef CartesianVector_<ContainerAllocator> Type;

  CartesianVector_()
    : unit()
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  CartesianVector_(const ContainerAllocator& _alloc)
    : unit(_alloc)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _unit_type;
  _unit_type unit;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::brics_actuator::CartesianVector_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::brics_actuator::CartesianVector_<ContainerAllocator> const> ConstPtr;

}; // struct CartesianVector_

typedef ::brics_actuator::CartesianVector_<std::allocator<void> > CartesianVector;

typedef boost::shared_ptr< ::brics_actuator::CartesianVector > CartesianVectorPtr;
typedef boost::shared_ptr< ::brics_actuator::CartesianVector const> CartesianVectorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::brics_actuator::CartesianVector_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::brics_actuator::CartesianVector_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace brics_actuator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'brics_actuator': ['/home/hdcl-ros/ballbotRepo/catkin_ws/src/brics_actuator/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::brics_actuator::CartesianVector_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::brics_actuator::CartesianVector_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::brics_actuator::CartesianVector_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::brics_actuator::CartesianVector_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brics_actuator::CartesianVector_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brics_actuator::CartesianVector_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::brics_actuator::CartesianVector_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fd973c0064b8c462dbcc9784beb041ca";
  }

  static const char* value(const ::brics_actuator::CartesianVector_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfd973c0064b8c462ULL;
  static const uint64_t static_value2 = 0xdbcc9784beb041caULL;
};

template<class ContainerAllocator>
struct DataType< ::brics_actuator::CartesianVector_<ContainerAllocator> >
{
  static const char* value()
  {
    return "brics_actuator/CartesianVector";
  }

  static const char* value(const ::brics_actuator::CartesianVector_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::brics_actuator::CartesianVector_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string unit\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::brics_actuator::CartesianVector_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::brics_actuator::CartesianVector_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.unit);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CartesianVector_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::brics_actuator::CartesianVector_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::brics_actuator::CartesianVector_<ContainerAllocator>& v)
  {
    s << indent << "unit: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.unit);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BRICS_ACTUATOR_MESSAGE_CARTESIANVECTOR_H
