# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\studentService_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\studentService_autogen.dir\\ParseCache.txt"
  "studentService_autogen"
  )
endif()
