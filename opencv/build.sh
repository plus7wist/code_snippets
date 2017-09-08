#! /usr/bin/env bash

build=cmake_build

if test -d $build; then
    rm -rf $build
fi

mkdir $build
cd $build
cmake .. >/dev/null 2>&1
make
