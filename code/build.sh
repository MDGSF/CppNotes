#!/bin/bash

set -e

SCRIPT_DIR=$(dirname "$0")
PROJECT_DIR=$(cd "$SCRIPT_DIR"; pwd)
BUILD_DIR=build/x86_64_linux

cd "$PROJECT_DIR"
mkdir -p $BUILD_DIR
cd $BUILD_DIR

cmake \
  -DCMAKE_BUILD_TYPE=Release \
  $PROJECT_DIR

make -j $(nproc)

