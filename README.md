GCC Visibility Test
===================

The purpose of this project is to check GCC link error in different situations.

Requirements
============

* CMake
* GCC (G++)

Usage
=====

The project is configured to always use "-fvisibility=hidden" option.

Use OMIT_PRIVATE_IMPLEMENTATION CMake option to omit a symbol from the library.
Use FORCE_PRIVATE_HIDDEN to explicilty mark the private class as hidden.
Use BUILD_TESTS to build an executable that links to the library.

Steps to reproduce the issue:

1. Set OMIT_PRIVATE_IMPLEMENTATION to TRUE.
2. (Maybe set CMAKE_VERBOSE_MAKEFILE to TRUE to see the actual compiler calls.)
3. Build the project.
4. Check that the build succeeded.

Set BUILD_TESTS to TRUE
or
set FORCE_PRIVATE_HIDDEN to TRUE
to trigger linkage error and prove that the library is not valid.
