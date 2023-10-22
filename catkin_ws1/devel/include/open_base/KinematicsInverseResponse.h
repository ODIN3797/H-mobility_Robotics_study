// Generated by gencpp from file open_base/KinematicsInverseResponse.msg
// DO NOT EDIT!


#ifndef OPEN_BASE_MESSAGE_KINEMATICSINVERSERESPONSE_H
#define OPEN_BASE_MESSAGE_KINEMATICSINVERSERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <open_base/Velocity.h>

namespace open_base
{
template <class ContainerAllocator>
struct KinematicsInverseResponse_
{
  typedef KinematicsInverseResponse_<ContainerAllocator> Type;

  KinematicsInverseResponse_()
    : output()  {
    }
  KinematicsInverseResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::open_base::Velocity_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::open_base::KinematicsInverseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_base::KinematicsInverseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct KinematicsInverseResponse_

typedef ::open_base::KinematicsInverseResponse_<std::allocator<void> > KinematicsInverseResponse;

typedef boost::shared_ptr< ::open_base::KinematicsInverseResponse > KinematicsInverseResponsePtr;
typedef boost::shared_ptr< ::open_base::KinematicsInverseResponse const> KinematicsInverseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_base::KinematicsInverseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_base::KinematicsInverseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::open_base::KinematicsInverseResponse_<ContainerAllocator1> & lhs, const ::open_base::KinematicsInverseResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::open_base::KinematicsInverseResponse_<ContainerAllocator1> & lhs, const ::open_base::KinematicsInverseResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace open_base

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::open_base::KinematicsInverseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_base::KinematicsInverseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::KinematicsInverseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::KinematicsInverseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::KinematicsInverseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::KinematicsInverseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_base::KinematicsInverseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "17afbbcc9d7e674dabef0f5797d91090";
  }

  static const char* value(const ::open_base::KinematicsInverseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x17afbbcc9d7e674dULL;
  static const uint64_t static_value2 = 0xabef0f5797d91090ULL;
};

template<class ContainerAllocator>
struct DataType< ::open_base::KinematicsInverseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_base/KinematicsInverseResponse";
  }

  static const char* value(const ::open_base::KinematicsInverseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_base::KinematicsInverseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_base/Velocity output\n"
"\n"
"\n"
"================================================================================\n"
"MSG: open_base/Velocity\n"
"float64 v_left\n"
"float64 v_back\n"
"float64 v_right\n"
;
  }

  static const char* value(const ::open_base::KinematicsInverseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_base::KinematicsInverseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KinematicsInverseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_base::KinematicsInverseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_base::KinematicsInverseResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::open_base::Velocity_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_BASE_MESSAGE_KINEMATICSINVERSERESPONSE_H
