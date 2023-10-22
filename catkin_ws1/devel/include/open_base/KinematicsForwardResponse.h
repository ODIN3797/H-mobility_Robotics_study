// Generated by gencpp from file open_base/KinematicsForwardResponse.msg
// DO NOT EDIT!


#ifndef OPEN_BASE_MESSAGE_KINEMATICSFORWARDRESPONSE_H
#define OPEN_BASE_MESSAGE_KINEMATICSFORWARDRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>

namespace open_base
{
template <class ContainerAllocator>
struct KinematicsForwardResponse_
{
  typedef KinematicsForwardResponse_<ContainerAllocator> Type;

  KinematicsForwardResponse_()
    : output()  {
    }
  KinematicsForwardResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::open_base::KinematicsForwardResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::open_base::KinematicsForwardResponse_<ContainerAllocator> const> ConstPtr;

}; // struct KinematicsForwardResponse_

typedef ::open_base::KinematicsForwardResponse_<std::allocator<void> > KinematicsForwardResponse;

typedef boost::shared_ptr< ::open_base::KinematicsForwardResponse > KinematicsForwardResponsePtr;
typedef boost::shared_ptr< ::open_base::KinematicsForwardResponse const> KinematicsForwardResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::open_base::KinematicsForwardResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::open_base::KinematicsForwardResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::open_base::KinematicsForwardResponse_<ContainerAllocator1> & lhs, const ::open_base::KinematicsForwardResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::open_base::KinematicsForwardResponse_<ContainerAllocator1> & lhs, const ::open_base::KinematicsForwardResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace open_base

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::open_base::KinematicsForwardResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::open_base::KinematicsForwardResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::KinematicsForwardResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::open_base::KinematicsForwardResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::KinematicsForwardResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::open_base::KinematicsForwardResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::open_base::KinematicsForwardResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4dc0c3656ea8ad48f1d7d90c513fe25a";
  }

  static const char* value(const ::open_base::KinematicsForwardResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4dc0c3656ea8ad48ULL;
  static const uint64_t static_value2 = 0xf1d7d90c513fe25aULL;
};

template<class ContainerAllocator>
struct DataType< ::open_base::KinematicsForwardResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "open_base/KinematicsForwardResponse";
  }

  static const char* value(const ::open_base::KinematicsForwardResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::open_base::KinematicsForwardResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose2D output\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
;
  }

  static const char* value(const ::open_base::KinematicsForwardResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::open_base::KinematicsForwardResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KinematicsForwardResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::open_base::KinematicsForwardResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::open_base::KinematicsForwardResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPEN_BASE_MESSAGE_KINEMATICSFORWARDRESPONSE_H
