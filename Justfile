# Set default shell to PowerShell for Windows
set shell := ["powershell", "-NoProfile", "-ExecutionPolicy", "Bypass", "-Command"]

# Build the project using CMake
build:
    mkdir -Force build
    cd build
    cmake -G "MinGW Makefiles"
    cmake --build .

# Run the executable
run:
    cd build
    ./ProductApp.exe

# Build and Run in one command
br: build run

# Clean and rebuild the project
rebuild:
    Remove-Item -Recurse -Force build
    just build
