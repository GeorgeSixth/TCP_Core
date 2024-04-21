cmake_minimum_required(VERSION 3.27)
project(tcp_core_bin)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(TCP_CORE REQUIRED)

# Add the example executable
add_executable(tcp_core_bin main.cpp)

# Add additional libraries or dependencies as needed
target_include_directories(tcp_core_bin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)
target_link_libraries(tcp_core_bin PRIVATE VulQIan)
target_include_directories(tcp_core_bin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../source/)
