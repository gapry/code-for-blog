cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(Cube)

set(AppName "Cube.out")

find_package(VTK COMPONENTS 
  CommonColor
  CommonCore
  CommonDataModel
  InteractionStyle
  RenderingContextOpenGL2
  RenderingCore
  RenderingFreeType
  RenderingGL2PSOpenGL2
  RenderingOpenGL2
)

add_executable(${AppName} MACOSX_BUNDLE app/main.cpp)
  target_link_libraries(${AppName} PRIVATE ${VTK_LIBRARIES}
)

vtk_module_autoinit(
  TARGETS ${AppName} 
  MODULES ${VTK_LIBRARIES}
)
