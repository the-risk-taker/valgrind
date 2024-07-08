# Valgrind

![Valgrind Logo](valgrind.png "Valgrind's St. George and the Dragon from [valgrind.org](https://valgrind.org/)")

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
cmake -S . -B build -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build build --parallel
```

> [!NOTE]
> We need debug information to feed Valgrind and some optimizations might also be necessary to have less noisy output, hence the `-DCMAKE_BUILD_TYPE=RelWithDebInfo` option.

## Running

There are runnable targets, for example: `run-helgrind-example`, to run, use the following command:

```shell
cmake --build build --target run-helgrind-example
```

Check `CMakeLists.txt` in each directory to find runnable examples.
