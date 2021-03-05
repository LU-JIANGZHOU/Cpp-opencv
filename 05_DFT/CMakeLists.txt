file(GLOB ImageFiles ${CMAKE_CURRENT_SOURCE_DIR}/*.jpg)
file(COPY ${ImageFiles} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(05-dft 05_dft.cpp)
target_link_libraries(05-dft ${OpenCV_LIBS})
