#!/usr/bin/env bash

export CONAN_REVISIONS_ENABLED="1"
conan remote add osp https://osp-conan.azurewebsites.net/artifactory/api/conan/public --f
conan user -p "Open Simulation Platform" -r osp osp

unameOut="$(uname -s)"
case "${unameOut}" in
    Linux*)     conan install . -s build_type=Release -s compiler.libcxx=libstdc++11 --install-folder=cmake-build-release --build=missing;;
    MINGW*)     conan install . -s build_type=Release --install-folder=cmake-build-release --build=missing;;
esac
