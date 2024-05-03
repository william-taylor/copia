
# Copia

Data platform experiment built with RocksDB and Poco.

```shell
# Dependencies
conan install . -s build_type=Debug --build=missing

cd build

# Generator
cmake .. --preset conan-default -DCMAKE_BUILD_TYPE=Debug

# Build
cmake --build . --config Debug

# Install
cmake --install . --config Debug --prefix ../install
```