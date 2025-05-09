// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtle_interfaces:srv/Waypoints.idl
// generated code does not contain a copyright notice

#include "turtle_interfaces/srv/detail/waypoints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__Waypoints__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0x53, 0x3f, 0xa4, 0x59, 0xfc, 0xe0, 0x04,
      0x8b, 0xc0, 0x94, 0xfc, 0x61, 0x8c, 0x49, 0xa7,
      0x5d, 0xec, 0x80, 0x88, 0xa3, 0x86, 0x26, 0x88,
      0x09, 0x11, 0x17, 0x3d, 0xfa, 0x72, 0x14, 0x0d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__Waypoints_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x56, 0x25, 0x58, 0xfc, 0xeb, 0x05, 0x2f,
      0x68, 0xb7, 0x32, 0x20, 0x05, 0x8f, 0xf2, 0xc9,
      0x46, 0x95, 0x53, 0x7f, 0x67, 0x10, 0x8a, 0xfe,
      0xe0, 0x3f, 0x98, 0xf2, 0xb2, 0x66, 0xd0, 0xde,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__Waypoints_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0x01, 0x8f, 0x5c, 0x14, 0xd0, 0x6c, 0xb7,
      0xb0, 0xc0, 0x03, 0xaf, 0xc7, 0xe1, 0xf3, 0xf3,
      0xb5, 0x3c, 0x33, 0x33, 0x59, 0x16, 0xe8, 0x6b,
      0x91, 0x5d, 0x05, 0x38, 0xab, 0x5b, 0xf0, 0x63,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__Waypoints_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x56, 0xe5, 0xc5, 0x7b, 0x05, 0xfd, 0x40,
      0x70, 0x64, 0xe7, 0x26, 0xaf, 0xec, 0xf3, 0x77,
      0x5e, 0x84, 0xc9, 0xf7, 0x29, 0xab, 0xc4, 0x44,
      0x64, 0xe7, 0xe0, 0x31, 0x54, 0x0a, 0x46, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char turtle_interfaces__srv__Waypoints__TYPE_NAME[] = "turtle_interfaces/srv/Waypoints";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtle_interfaces__srv__Waypoints_Event__TYPE_NAME[] = "turtle_interfaces/srv/Waypoints_Event";
static char turtle_interfaces__srv__Waypoints_Request__TYPE_NAME[] = "turtle_interfaces/srv/Waypoints_Request";
static char turtle_interfaces__srv__Waypoints_Response__TYPE_NAME[] = "turtle_interfaces/srv/Waypoints_Response";

// Define type names, field names, and default values
static char turtle_interfaces__srv__Waypoints__FIELD_NAME__request_message[] = "request_message";
static char turtle_interfaces__srv__Waypoints__FIELD_NAME__response_message[] = "response_message";
static char turtle_interfaces__srv__Waypoints__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__Waypoints__FIELDS[] = {
  {
    {turtle_interfaces__srv__Waypoints__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__Waypoints_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__Waypoints__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__Waypoints_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__Waypoints__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__Waypoints_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__srv__Waypoints__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__Waypoints_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__Waypoints_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__Waypoints_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__Waypoints__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__Waypoints__TYPE_NAME, 31, 31},
      {turtle_interfaces__srv__Waypoints__FIELDS, 3, 3},
    },
    {turtle_interfaces__srv__Waypoints__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_interfaces__srv__Waypoints_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtle_interfaces__srv__Waypoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = turtle_interfaces__srv__Waypoints_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__Waypoints_Request__FIELD_NAME__waypoints[] = "waypoints";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__Waypoints_Request__FIELDS[] = {
  {
    {turtle_interfaces__srv__Waypoints_Request__FIELD_NAME__waypoints, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__srv__Waypoints_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__Waypoints_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__Waypoints_Request__TYPE_NAME, 39, 39},
      {turtle_interfaces__srv__Waypoints_Request__FIELDS, 1, 1},
    },
    {turtle_interfaces__srv__Waypoints_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__Waypoints_Response__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__Waypoints_Response__FIELDS[] = {
  {
    {turtle_interfaces__srv__Waypoints_Response__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__Waypoints_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__Waypoints_Response__TYPE_NAME, 40, 40},
      {turtle_interfaces__srv__Waypoints_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__Waypoints_Event__FIELD_NAME__info[] = "info";
static char turtle_interfaces__srv__Waypoints_Event__FIELD_NAME__request[] = "request";
static char turtle_interfaces__srv__Waypoints_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__Waypoints_Event__FIELDS[] = {
  {
    {turtle_interfaces__srv__Waypoints_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__Waypoints_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_interfaces__srv__Waypoints_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__Waypoints_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_interfaces__srv__Waypoints_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__srv__Waypoints_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__Waypoints_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__Waypoints_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__Waypoints_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__Waypoints_Event__TYPE_NAME, 37, 37},
      {turtle_interfaces__srv__Waypoints_Event__FIELDS, 3, 3},
    },
    {turtle_interfaces__srv__Waypoints_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_interfaces__srv__Waypoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtle_interfaces__srv__Waypoints_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/Point[] waypoints\n"
  "---\n"
  "\n"
  "float64 distance";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__Waypoints__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__Waypoints__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__Waypoints_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__Waypoints_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__Waypoints_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__Waypoints_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__Waypoints_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__Waypoints_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__Waypoints__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__Waypoints__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *turtle_interfaces__srv__Waypoints_Event__get_individual_type_description_source(NULL);
    sources[5] = *turtle_interfaces__srv__Waypoints_Request__get_individual_type_description_source(NULL);
    sources[6] = *turtle_interfaces__srv__Waypoints_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__Waypoints_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__Waypoints_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__Waypoints_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__Waypoints_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__Waypoints_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__Waypoints_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *turtle_interfaces__srv__Waypoints_Request__get_individual_type_description_source(NULL);
    sources[5] = *turtle_interfaces__srv__Waypoints_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
