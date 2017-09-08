cmake_minimum_required(VERSION 3.5)

set(OpenCV_DIR "/opt/opencv/default/share/OpenCV")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

find_package(OpenCV)

file(GLOB source_list "${PROJECT_SOURCE_DIR}/*.cpp")

foreach (source ${source_list})
    get_filename_component(basename ${source} NAME_WE)
    message(STATUS "${source} -> ${basename}.bin")
    add_executable(${basename}.bin ${source})
    target_link_libraries(${basename}.bin ${OpenCV_LIBS})
endforeach()
