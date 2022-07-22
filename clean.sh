#!/bin/bash
rm -rf build
meson build
ninja -C build
