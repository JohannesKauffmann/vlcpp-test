cmake_minimum_required(VERSION 3.14)

project(vlcpp-test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(VLCWINX64_DIR "C:/Users/Johannes/.nuget/packages/videolan.libvlc.windows/3.0.12/build/x64/")
set(LIBVLCPP_DIR "C:/Users/Johannes/source/repos/libvlcpp")

add_executable(vlcpp-test main.cpp)

target_include_directories(vlcpp-test PRIVATE ${VLCWINX64_DIR}/include)
target_include_directories(vlcpp-test PRIVATE ${LIBVLCPP_DIR})
target_link_libraries(vlcpp-test PRIVATE ${VLCWINX64_DIR}/libvlc.dll ${VLCWINX64_DIR}/libvlccore.dll)
