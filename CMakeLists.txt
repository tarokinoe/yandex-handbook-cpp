cmake_minimum_required(VERSION 3.23)
project(cppcourse_ru)

set(CMAKE_CXX_STANDARD 17)
set(THREADS_PREFER_PTHREAD_FLAG ON)
SET(CMAKE_CXX_FLAGS -pthread)

add_executable(
    yandex-handbook-cpp
    main.cpp
)
