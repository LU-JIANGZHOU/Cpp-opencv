cmake_minimum_required(VERSION 3.6)
set(project_name "OpenCV4Tutorial")
project("${project_name}")
# this is a C++17 project
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
find_package( OpenCV REQUIRED )
INCLUDE_DIRECTORIES( ${OpenCV_INCLUDE_DIRS} )
SET(OpenCV_LIBRARIES ${OpenCV_LIBS})
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

# add tutorials projects
add_subdirectory(Core_Mat)
add_subdirectory(01_LoadSaveImage)
add_subdirectory(02_window)
add_subdirectory(03_pixels)
add_subdirectory(04_splitMerge)
