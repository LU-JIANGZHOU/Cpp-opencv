file(GLOB ImageFiles ${CMAKE_CURRENT_SOURCE_DIR}/*.png)

file(COPY ${ImageFiles} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

#file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/aces.png
#     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
add_executable(01_LoadSaveImage 01_LoadSaveImage.cpp)
target_link_libraries(01_LoadSaveImage ${OpenCV_LIBS})
