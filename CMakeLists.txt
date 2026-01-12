cmake_minimum_required(VERSION 3.10)
project(cicd_test LANGUAGES CXX)

if(NOT TARGET_ARCH)
    set(TARGET_ARCH "x64")
endif()
set(CMAKE_CXX_STANDARD 20)
add_definitions(-DPROJECT_VERSION="${PROJECT_VERSION}")
add_definitions(-DARCH_NAME="${TARGET_ARCH}")

add_definitions(-DARCH_NAME="${TARGET_ARCH}")
add_executable(cicd_test main.cpp)

if(WIN32)
    set_target_properties(cicd_test PROPERTIES LINK_FLAGS "-static")
else()
    # Linux 下静态链接 libgcc 和 libstdc++
    target_link_options(cicd_test PRIVATE -static-libgcc -static-libstdc++)
endif()
