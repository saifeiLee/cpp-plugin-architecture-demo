# Example of Cpp plugin architecture

The key point:
- The plugin is a shared library
- Load plugin by dlopen

## How to build

```bash
mkdir build
cd build 
cmake ..
make
```

## How to run

```bash
cd build/main-cpp
./main-cpp
```