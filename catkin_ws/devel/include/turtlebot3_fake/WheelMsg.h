// Generated by gencpp from file turtlebot3_fake/WheelMsg.msg
// DO NOT EDIT!


#ifndef TURTLEBOT3_FAKE_MESSAGE_WHEELMSG_H
#define TURTLEBOT3_FAKE_MESSAGE_WHEELMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot3_fake
{
template <class ContainerAllocator>
struct WheelMsg_
{
  typedef WheelMsg_<ContainerAllocator> Type;

  WheelMsg_()
    : left_wheel(0.0)
    , right_wheel(0.0)  {
    }
  WheelMsg_(const ContainerAllocator& _alloc)
    : left_wheel(0.0)
    , right_wheel(0.0)  {
  (void)_alloc;
    }



   typedef float _left_wheel_type;
  _left_wheel_type left_wheel;

   typedef float _right_wheel_type;
  _right_wheel_type right_wheel;





  typedef boost::shared_ptr< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> const> ConstPtr;

}; // struct WheelMsg_

typedef ::turtlebot3_fake::WheelMsg_<std::allocator<void> > WheelMsg;

typedef boost::shared_ptr< ::turtlebot3_fake::WheelMsg > WheelMsgPtr;
typedef boost::shared_ptr< ::turtlebot3_fake::WheelMsg const> WheelMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot3_fake::WheelMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::turtlebot3_fake::WheelMsg_<ContainerAllocator1> & lhs, const ::turtlebot3_fake::WheelMsg_<ContainerAllocator2> & rhs)
{
  return lhs.left_wheel == rhs.left_wheel &&
    lhs.right_wheel == rhs.right_wheel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::turtlebot3_fake::WheelMsg_<ContainerAllocator1> & lhs, const ::turtlebot3_fake::WheelMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace turtlebot3_fake

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7e1e4b5f30cf3510f25ed759aee442db";
  }

  static const char* value(const ::turtlebot3_fake::WheelMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7e1e4b5f30cf3510ULL;
  static const uint64_t static_value2 = 0xf25ed759aee442dbULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot3_fake/WheelMsg";
  }

  static const char* value(const ::turtlebot3_fake::WheelMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 left_wheel\n"
"float32 right_wheel\n"
;
  }

  static const char* value(const ::turtlebot3_fake::WheelMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left_wheel);
      stream.next(m.right_wheel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WheelMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot3_fake::WheelMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot3_fake::WheelMsg_<ContainerAllocator>& v)
  {
    s << indent << "left_wheel: ";
    Printer<float>::stream(s, indent + "  ", v.left_wheel);
    s << indent << "right_wheel: ";
    Printer<float>::stream(s, indent + "  ", v.right_wheel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT3_FAKE_MESSAGE_WHEELMSG_H