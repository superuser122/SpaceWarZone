REM cmake -S . -B ./build -DCMAKE_BUILD_CONFIG=Debug
cmake -S . -B ./build
cmake --build ./build
REM cmake --build ./build --config Release
