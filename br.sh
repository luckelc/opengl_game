#!/bin/bash

# Script to rebuild and run the project

# Clean previous build
rm -rf build
mkdir build
cd build

# Generate build files
cmake ..

# Build the project
make

# Run the executable (replace YourProjectName with your actual executable name)
./opengl
