# Valgrind

![valgrind](valgrind.png "Valgrind's St. George and Dragon from [valgrind.org](https://valgrind.org/)")

Some examples of Valgrind and Valgrind tools:

- Memcheck
- Cachegrind
- Callgrind
- KCachegrind
- Helgrind
- DRD
- Massif

## Building

Building examples with CMake (from repository root directory):

```shell
cmake -S . -B <build_dir> -G Ninja -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build <build_dir>
```

> NOTE: We want a debug information to feed Valgrind so `-DCMAKE_BUILD_TYPE=RelWithDebInfo`. Sometimes some optimizations are needed as well.

## Running

There are runnable targets, for example: `run-helgrind-example`, to run call:

```shell
cmake --build <build_dir> --target run-helgrind-example
```

Check `CMakeLists.txt` in each directory to find runnable examples.
