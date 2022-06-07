cmake_minimum_required(VERSION 3.5)

project(rain-timer VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets SerialPort)
#find_package(SQLite3)

file(GLOB SOURCES
        src/*.cpp
        src/*.h
        src/*.ui
        src/*.hpp
)

add_executable(rain-timer
    ${SOURCES}
)


#include_directories(${SQLite3_INCLUDE_DIRS})

target_link_libraries(rain-timer PRIVATE Qt5::Widgets Qt5::SerialPort
    #${SQLite3_LIBRARIES}
    )

