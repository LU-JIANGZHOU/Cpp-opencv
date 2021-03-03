file(GLOB ImageFiles ${CMAKE_CURRENT_SOURCE_DIR}/*.jpg)
file(COPY ${ImageFiles} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(04-splitMerge 04_splitMerge.cpp)
target_link_libraries(04-splitMerge ${OpenCV_LIBS})
