# byteReverse
## Build:
### Unix:
- cmake -S . -B build/release -D CMAKE_BUILD_TYPE=Release
- cmake --build build/release
### Windows:
REQUIRED MINGW 
- cmake -S . -B build/release -G "MinGW Makefiles" -D CMAKE_BUILD_TYPE=Release
- cmake --build build/release
## Test:
### In the root dir call ./run_tests.sh
### Notice. On linux might to make executable by chmode +x run_tests.sh
