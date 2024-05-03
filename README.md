

# ...

```
conan profile detect

conan install . -s build_type=Debug --build=missing

cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
```