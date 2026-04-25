#!/bin/bash

if [ -z "$BUILD_WORKSPACE_DIRECTORY" ]; then
    echo "Error: Run this via 'bazel run //scripts:clean'"
    exit 1
fi

cd "$BUILD_WORKSPACE_DIRECTORY"

echo "Standard cleaning..."

bazel clean

echo "Workspace is tidy!"