// Generated by gencpp from file serial_common/wifi_buff.msg
// DO NOT EDIT!


#ifndef SERIAL_COMMON_MESSAGE_WIFI_BUFF_H
#define SERIAL_COMMON_MESSAGE_WIFI_BUFF_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace serial_common
{
template <class ContainerAllocator>
struct wifi_buff_
{
  typedef wifi_buff_<ContainerAllocator> Type;

  wifi_buff_()
    : left(0)
    , right(0)  {
    }
  wifi_buff_(const ContainerAllocator& _alloc)
    : left(0)
    , right(0)  {
  (void)_alloc;
    }



   typedef int16_t _left_type;
  _left_type left;

   typedef int16_t _right_type;
  _right_type right;




  typedef boost::shared_ptr< ::serial_common::wifi_buff_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::serial_common::wifi_buff_<ContainerAllocator> const> ConstPtr;

}; // struct wifi_buff_

typedef ::serial_common::wifi_buff_<std::allocator<void> > wifi_buff;

typedef boost::shared_ptr< ::serial_common::wifi_buff > wifi_buffPtr;
typedef boost::shared_ptr< ::serial_common::wifi_buff const> wifi_buffConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::serial_common::wifi_buff_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::serial_common::wifi_buff_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace serial_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'serial_common': ['/home/xjturm02/catkin_ws/src/serial_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::serial_common::wifi_buff_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serial_common::wifi_buff_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serial_common::wifi_buff_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serial_common::wifi_buff_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serial_common::wifi_buff_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serial_common::wifi_buff_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::serial_common::wifi_buff_<ContainerAllocator> >
{
  static const char* value()
  {
    return "09d1b2323a1aeae9343e81809a820b60";
  }

  static const char* value(const ::serial_common::wifi_buff_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x09d1b2323a1aeae9ULL;
  static const uint64_t static_value2 = 0x343e81809a820b60ULL;
};

template<class ContainerAllocator>
struct DataType< ::serial_common::wifi_buff_<ContainerAllocator> >
{
  static const char* value()
  {
    return "serial_common/wifi_buff";
  }

  static const char* value(const ::serial_common::wifi_buff_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::serial_common::wifi_buff_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 left\n\
int16 right\n\
";
  }

  static const char* value(const ::serial_common::wifi_buff_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::serial_common::wifi_buff_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left);
      stream.next(m.right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct wifi_buff_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::serial_common::wifi_buff_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::serial_common::wifi_buff_<ContainerAllocator>& v)
  {
    s << indent << "left: ";
    Printer<int16_t>::stream(s, indent + "  ", v.left);
    s << indent << "right: ";
    Printer<int16_t>::stream(s, indent + "  ", v.right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERIAL_COMMON_MESSAGE_WIFI_BUFF_H