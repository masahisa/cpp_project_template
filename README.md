# cpp_project_template

This is a minimal template for general C/C++ projects.

## Project Structure

The project structure is shown below.

```
cpp_project_template/
    CMakeLists.txt
    bin/
    build/
    cov/
        CMakeLists.txt
        lcov/
    doc/
        CMakeLists.txt
        Doxyfile.in
        doxygen/
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
`cov`: the coverage directory  
`cov/lcov`: the output directory of lcov  
`doc`: the document directory  
`doc/doxygen`: the output directory of doxygen  
`include`: header files of the project  
`lib`: the output directory of shared libraries and archives  
`src`: source files of the project  
`test`: source files for all the tests

## Dependencies
This project depends on `cmake`, `cpputest`, `doxygen`, `graphviz` and `lcov`.

## Build

1. cmake  
Make and move to the `build` directory and cmake the top level `CMakeLists.txt`.  
If `Release` or `Debug` option is needed, use the `-DCMAKE_BUILD_TYPE`.  
```
$ mkdir build
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
If the detail info is needed, use `-V` option.  
```
$ ctest
or
$ ctest -V
```

4. make doc  
Make documents by doxygen.  
```
$ make doc
```

5. make cov  
Make coverage report by lcov.  
```
$ make cov
```

## License
MIT License