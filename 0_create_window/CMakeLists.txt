cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

enable_language(CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(main CXX)

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(main main.cpp)

target_include_directories(main PUBLIC ${glfw3_DIR} ${Vulkan_INCLUDE_DIR})
target_link_libraries(main glfw ${Vulkan_LIBRARY})

