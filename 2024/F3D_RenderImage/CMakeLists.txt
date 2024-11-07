cmake_minimum_required(VERSION 3.5)

project(render-image)

set(AppName "RenderImage.out")

find_package(f3d REQUIRED COMPONENTS library)

add_executable(${AppName} app/main.cpp)
target_link_libraries(${AppName} f3d::libf3d)
set_target_properties(${AppName} PROPERTIES CXX_STANDARD 17)