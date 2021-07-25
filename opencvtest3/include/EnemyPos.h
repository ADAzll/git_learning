// Generated by gencpp from file serial_common/EnemyPos.msg
// DO NOT EDIT!


#ifndef SERIAL_COMMON_MESSAGE_ENEMYPOS_H
#define SERIAL_COMMON_MESSAGE_ENEMYPOS_H


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
struct EnemyPos_
{
  typedef EnemyPos_<ContainerAllocator> Type;

  EnemyPos_()
    : enemy_dist(0)
    , enemy_yaw(0)
    , enemy_pitch(0)
    , mode(0)  {
    }
  EnemyPos_(const ContainerAllocator& _alloc)
    : enemy_dist(0)
    , enemy_yaw(0)
    , enemy_pitch(0)
    , mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _enemy_dist_type;
  _enemy_dist_type enemy_dist;

   typedef int32_t _enemy_yaw_type;
  _enemy_yaw_type enemy_yaw;

   typedef int32_t _enemy_pitch_type;
  _enemy_pitch_type enemy_pitch;

   typedef int32_t _mode_type;
  _mode_type mode;





  typedef boost::shared_ptr< ::serial_common::EnemyPos_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::serial_common::EnemyPos_<ContainerAllocator> const> ConstPtr;

}; // struct EnemyPos_

typedef ::serial_common::EnemyPos_<std::allocator<void> > EnemyPos;

typedef boost::shared_ptr< ::serial_common::EnemyPos > EnemyPosPtr;
typedef boost::shared_ptr< ::serial_common::EnemyPos const> EnemyPosConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::serial_common::EnemyPos_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::serial_common::EnemyPos_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace serial_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'serial_common': ['/home/xjturm/serial_ws/src/serial_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::serial_common::EnemyPos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serial_common::EnemyPos_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serial_common::EnemyPos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serial_common::EnemyPos_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serial_common::EnemyPos_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serial_common::EnemyPos_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::serial_common::EnemyPos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d278822d8acfbc3aa6895b78b02afb89";
  }

  static const char* value(const ::serial_common::EnemyPos_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd278822d8acfbc3aULL;
  static const uint64_t static_value2 = 0xa6895b78b02afb89ULL;
};

template<class ContainerAllocator>
struct DataType< ::serial_common::EnemyPos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "serial_common/EnemyPos";
  }

  static const char* value(const ::serial_common::EnemyPos_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::serial_common::EnemyPos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 enemy_dist\n\
int32 enemy_yaw\n\
int32 enemy_pitch\n\
int32 mode\n\
";
  }

  static const char* value(const ::serial_common::EnemyPos_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::serial_common::EnemyPos_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enemy_dist);
      stream.next(m.enemy_yaw);
      stream.next(m.enemy_pitch);
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnemyPos_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::serial_common::EnemyPos_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::serial_common::EnemyPos_<ContainerAllocator>& v)
  {
    s << indent << "enemy_dist: ";
    Printer<int32_t>::stream(s, indent + "  ", v.enemy_dist);
    s << indent << "enemy_yaw: ";
    Printer<int32_t>::stream(s, indent + "  ", v.enemy_yaw);
    s << indent << "enemy_pitch: ";
    Printer<int32_t>::stream(s, indent + "  ", v.enemy_pitch);
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERIAL_COMMON_MESSAGE_ENEMYPOS_H