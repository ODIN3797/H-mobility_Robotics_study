// Generated by gencpp from file turtlebot_path_tracker/LocalPathPoints.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_PATH_TRACKER_MESSAGE_LOCALPATHPOINTS_H
#define TURTLEBOT_PATH_TRACKER_MESSAGE_LOCALPATHPOINTS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace turtlebot_path_tracker
{
template <class ContainerAllocator>
struct LocalPathPoints_
{
  typedef LocalPathPoints_<ContainerAllocator> Type;

  LocalPathPoints_()
    : path_points()  {
    }
  LocalPathPoints_(const ContainerAllocator& _alloc)
    : path_points(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Point_<ContainerAllocator> >> _path_points_type;
  _path_points_type path_points;





  typedef boost::shared_ptr< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> const> ConstPtr;

}; // struct LocalPathPoints_

typedef ::turtlebot_path_tracker::LocalPathPoints_<std::allocator<void> > LocalPathPoints;

typedef boost::shared_ptr< ::turtlebot_path_tracker::LocalPathPoints > LocalPathPointsPtr;
typedef boost::shared_ptr< ::turtlebot_path_tracker::LocalPathPoints const> LocalPathPointsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator1> & lhs, const ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator2> & rhs)
{
  return lhs.path_points == rhs.path_points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator1> & lhs, const ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace turtlebot_path_tracker

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c49f35e03746a5cd41f281d3045c92c2";
  }

  static const char* value(const ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc49f35e03746a5cdULL;
  static const uint64_t static_value2 = 0x41f281d3045c92c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_path_tracker/LocalPathPoints";
  }

  static const char* value(const ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point[] path_points\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path_points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocalPathPoints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_path_tracker::LocalPathPoints_<ContainerAllocator>& v)
  {
    s << indent << "path_points[]" << std::endl;
    for (size_t i = 0; i < v.path_points.size(); ++i)
    {
      s << indent << "  path_points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.path_points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_PATH_TRACKER_MESSAGE_LOCALPATHPOINTS_H
