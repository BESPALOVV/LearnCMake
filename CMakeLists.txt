﻿
cmake_minimum_required (VERSION 3.8)

project (SuperProject VERSION 1.0)

add_library(project_compiler_flags INTERFACE)

target_compile_features(project_compiler_flags INTERFACE cxx_std_14)

set(gcc_like_cxx "$<COMPILE_LANG_AND_ID:CXX,ARMClang,AppleClang,Clang,GNU,LCC>")

set(msvc_cxx "$<COMPILE_LANG_AND_ID:CXX,MSVC>")

target_compile_options(project_compiler_flags INTERFACE 
"$<${gcc_like_cxx}:$<BUILD_INTERFACE:-Wall;-Wextra;-Wshadow;-Wformat=2;-Wunused>>"
"$<${msvc_cxx}:$<BUILD_INTERFACE:-W3>>"
)

add_subdirectory ("ForLearCMake")

add_subdirectory("MathFunctions")

