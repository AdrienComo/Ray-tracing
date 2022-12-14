cmake_minimum_required(VERSION 3.16)
project(Raytracing)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_COMPILER "/usr/include/c++")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(Raytracing src/main.cpp src/mainwindow.ui src/mainwindow.cpp src/mainwindow.h src/Object.cpp src/Object.h src/Sphere.cpp src/Sphere.h src/Vector.cpp src/Vector.h  src/Vector_2.h src/Ray.cpp src/Ray.h src/SceneManager.cpp src/SceneManager.h src/Light.cpp src/Light.h src/Renderer.cpp src/Renderer.h src/Matrix4x4.cpp src/Matrix4x4.h src/Camera.cpp src/Camera.h src/Plane.cpp src/Plane.h src/Material.cpp src/Material.h src/Cube.cpp src/Cube.h src/ComplexObject.cpp src/ComplexObject.h src/ComplexObjectUnion.cpp src/ComplexObjectUnion.h src/ComplexObjectSubstract.cpp src/ComplexObjectSubstract.h src/ComplexObjectIntersect.cpp src/ComplexObjectIntersect.h)
find_package(Threads REQUIRED)

find_package(Qt5Widgets REQUIRED)

target_link_libraries(Raytracing Qt5::Widgets)

if(THREADS_HAVE_PTHREAD_ARG)
    set_property(TARGET Raytracing PROPERTY COMPILE_OPTIONS "-pthread")
    set_property(TARGET Raytracing PROPERTY INTERFACE_COMPILE_OPTIONS "-pthread")
endif()
if(CMAKE_THREAD_LIBS_INIT)
    target_link_libraries(Raytracing "${CMAKE_THREAD_LIBS_INIT}")
endif()
find_package(Threads REQUIRED)
