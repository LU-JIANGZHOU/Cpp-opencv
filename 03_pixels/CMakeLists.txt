file(GLOB ImageFiles ${CMAKE_CURRENT_SOURCE_DIR}/*.jpg)
file(COPY ${ImageFiles} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(03-pixels 03_pixels.cpp)
target_link_libraries(03-pixels ${OpenCV_LIBS})
