// Generated by gencpp from file trick_msgs/Num.msg
// DO NOT EDIT!


#ifndef TRICK_MSGS_MESSAGE_NUM_H
#define TRICK_MSGS_MESSAGE_NUM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace trick_msgs
{
template <class ContainerAllocator>
struct Num_
{
  typedef Num_<ContainerAllocator> Type;

  Num_()
    : first_name()
    , last_name()
    , date()
    , points(0)
    , rebounds(0)
    , blocks(0)
    , assists(0)  {
    }
  Num_(const ContainerAllocator& _alloc)
    : first_name(_alloc)
    , last_name(_alloc)
    , date(_alloc)
    , points(0)
    , rebounds(0)
    , blocks(0)
    , assists(0)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _first_name_type;
  _first_name_type first_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _last_name_type;
  _last_name_type last_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _date_type;
  _date_type date;

   typedef uint8_t _points_type;
  _points_type points;

   typedef uint32_t _rebounds_type;
  _rebounds_type rebounds;

   typedef uint32_t _blocks_type;
  _blocks_type blocks;

   typedef uint32_t _assists_type;
  _assists_type assists;




  typedef boost::shared_ptr< ::trick_msgs::Num_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::trick_msgs::Num_<ContainerAllocator> const> ConstPtr;

}; // struct Num_

typedef ::trick_msgs::Num_<std::allocator<void> > Num;

typedef boost::shared_ptr< ::trick_msgs::Num > NumPtr;
typedef boost::shared_ptr< ::trick_msgs::Num const> NumConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::trick_msgs::Num_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::trick_msgs::Num_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace trick_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'trick_msgs': ['.'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::trick_msgs::Num_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::trick_msgs::Num_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trick_msgs::Num_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trick_msgs::Num_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trick_msgs::Num_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trick_msgs::Num_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::trick_msgs::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "345b622c1a8704503c97d4d3be56b05d";
  }

  static const char* value(const ::trick_msgs::Num_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x345b622c1a870450ULL;
  static const uint64_t static_value2 = 0x3c97d4d3be56b05dULL;
};

template<class ContainerAllocator>
struct DataType< ::trick_msgs::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "trick_msgs/Num";
  }

  static const char* value(const ::trick_msgs::Num_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::trick_msgs::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string first_name\n\
string last_name\n\
string date\n\
uint8 points\n\
uint32 rebounds\n\
uint32 blocks\n\
uint32 assists\n\
";
  }

  static const char* value(const ::trick_msgs::Num_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::trick_msgs::Num_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.first_name);
      stream.next(m.last_name);
      stream.next(m.date);
      stream.next(m.points);
      stream.next(m.rebounds);
      stream.next(m.blocks);
      stream.next(m.assists);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Num_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::trick_msgs::Num_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::trick_msgs::Num_<ContainerAllocator>& v)
  {
    s << indent << "first_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.first_name);
    s << indent << "last_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.last_name);
    s << indent << "date: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.date);
    s << indent << "points: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.points);
    s << indent << "rebounds: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.rebounds);
    s << indent << "blocks: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.blocks);
    s << indent << "assists: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.assists);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRICK_MSGS_MESSAGE_NUM_H