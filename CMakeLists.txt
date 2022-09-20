cmake_minimum_required(VERSION 3.16)

project(testTask)

add_executable(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    include
)

target_sources(${PROJECT_NAME} PUBLIC
    src/main.cpp
)





add_executable(generateData)

target_include_directories(generateData PUBLIC
    include
)

target_sources(generateData PUBLIC
    generateData/main.cpp
)