# Initializing with latest min version
cmake_minimum_required(VERSION 3.25)

project(ninety-launch LANGUAGES C)

add_executable(9xl WIN32 main.c)

# Should these be optional? I don't think so, but maybe I should make them so.
find_program(CLANG_TIDY_EXE clang-tidy)
find_program(CPPCHECK_EXE cppcheck)

if(CLANG_TIDY_EXE)
    set_target_properties(9xl PROPERTIES C_CLANG_TIDY
        "${CLANG_TIDY_EXE};-p;${CMAKE_SOURCE_DIR}")
endif()

if (CPPCHECK_EXE)
    set_target_properties(9xl PROPERTIES C_CPPCHECK
        "${CPPCHECK_EXE};--std=c99;--platform=win32A;--library=windows;--error-exitcode=1;--enable=warning,style,performance,portability")
endif()

# Reserving private here for when we have lua targets in the future
target_compile_options(9xl PRIVATE -zastd=c99 -3r -wx)
