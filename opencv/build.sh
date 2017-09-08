#! /usr/bin/env bash

build=cmake_build
cmake_build_type=Debug

if test $# -ge 1; then
    cmake_build_type=$1
fi

case $cmake_build_type in
    None|Debug|Release|RelWithDebInfo|MinSizeRel);;
    *)
        echo Invalid CMAKE_BUILD_TYPE: $cmake_build_type;
        exit -1;;
esac

if test -d $build; then
    rm -rf $build
fi

mkdir $build
cd $build
cmake -DCMAKE_BUILD_TYPE=$cmake_build_type .. >/dev/null 2>&1
make
