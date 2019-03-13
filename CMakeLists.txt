cmake_minimum_required( VERSION 2.8 )
project( video_processing )

# 添加c++ 11标准支持
set( CMAKE_CXX_FLAGS "-std=c++11" )

# 寻找OpenCV库
find_package( OpenCV REQUIRED )
# 添加头文件
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable( video main.cpp )
# 链接OpenCV库
target_link_libraries( video ${OpenCV_LIBS} )

add_executable( video2 main2.cpp )
# 链接OpenCV库
target_link_libraries( video2 ${OpenCV_LIBS} )

add_executable( video2img video2img.cpp )
# 链接OpenCV库
target_link_libraries( video2img ${OpenCV_LIBS} )

add_executable( img2img img2img.cpp )
# 链接OpenCV库
target_link_libraries( img2img ${OpenCV_LIBS} )


