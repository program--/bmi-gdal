cmake_minimum_required(VERSION 3.14...3.26)
project(bmi-gdal)
find_package(GDAL REQUIRED)
add_library(BMI_GDAL)
target_sources(BMI_GDAL
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/thirdparty/bmi-cxx/bmi.hxx"
        "${CMAKE_CURRENT_LIST_DIR}/src/GDALBmi.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/src/GDALBmi.cpp"
        "${CMAKE_CURRENT_LIST_DIR}/src/GDALRasterBmi.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/src/GDALRasterBmi.cpp"
        "${CMAKE_CURRENT_LIST_DIR}/src/GDALVectorBmi.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/src/GDALVectorBmi.cpp"
)
target_link_libraries(BMI_GDAL PUBLIC GDAL::GDAL)
target_include_directories(BMI_GDAL
    PUBLIC
        "${CMAKE_CURRENT_LIST_DIR}/include"
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/thirdparty/bmi-cxx"
        "${CMAKE_CURRENT_LIST_DIR}/src/"
)


