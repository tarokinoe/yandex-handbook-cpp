cmake_minimum_required(VERSION 3.5)

project(yandex-handbook-cpp VERSION 0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)
add_compile_options(-Wextra)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_executable(yandexHandBook src/main.cpp)
target_link_libraries(
    yandexHandBook
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(yandexHandBook)
