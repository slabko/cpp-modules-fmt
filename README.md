Building spdlog

```
git submodule update --init --recursive
mkdir thirdparty/bin
cd thirdparty/src/fmt
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$(pwd)/../../../bin
make -j
make install
```

Building and running the application
```
mkdir build
cd build
cmake ..
make
./main
```
