cmake_minimum_required(VERSION 2.8)
project(HoockeyPlayerClassifier)

set(OpenCV_DIR "/usr/local/share/OpenCV/")
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(detector detector.cpp)
target_link_libraries(detector ${OpenCV_LIBS})