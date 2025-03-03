cmake_minimum_required(VERSION 3.10)
project(ProductApp)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)  # This allows #include "model/Product.h" to work

add_executable(ProductApp
    src/model/Product.cpp
    src/service/ProductService.cpp
    src/view/View.cpp
    src/controller/Controller.cpp
    src/main.cpp
)
