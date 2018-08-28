# cpp_project_template

This is a minimal template for general C/C++ projects.

## Project Structure

The project structure is shown below.

```
cpp_project_template/
    CMakeLists.txt
    bin/
    build/
    include/
        manipulator.h
        numeric.h
    lib/
    src/
        CMakeLists.txt
        main.cpp
        manipulator.cpp
        numeric.cpp
    test/
        CMakeLists.txt
        run_all_tests.cpp
        test_manipulator.cpp
        test_numeric.cpp
```

`bin`: the output directory of executables  
`build`: the building directory  
`include`: header files of the project  
`lib`: the output directory of shared libraries and archives  
`src`: source files of the project  
`test`: source files for all the tests

## Build

1. cmake  
Move to the `build` direcotry and cmake the top level `CMakeLists.txt`.  
If `Release` or `Debug` option is needed, use the `-DCMAKE_BUILD_TYPE`.  
```
$ cd build
$ cmake ..
or
$ cmake -DCMAKE_BUILD_TYPE=Release ..
or
$ cmake -DCMAKE_BUILD_TYPE=Debug ..
```

2. make  
make the targets.  
`libnumeric.a` and `libmanipulator.so` are output to `lib` directory.  
Executables `cpp_project_template` and `run_all_tests` are to `bin`.
```
$ make
```

3. ctest  
Run all the tests.  
This project uses `CPPUTest`.  
if the detail info is needed, use `-V` option.  
```
$ ctest
or
$ ctest -V
```

# License
MIT License