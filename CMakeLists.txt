cmake_minimum_required(VERSION 3.6)
project(TrafficSituation)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror")
set(CMAKE_EXE_LINKER_FLAGS -pthread)

# Set include dir
include_directories(gtest/include)

# Set Library dir
link_directories(gtest/lib)

# Set source files for RELEASE target
set(RELEASE_SOURCE_FILES
        src/Verkeerslicht.cpp
        src/Voertuig.cpp
        src/Baan.cpp
        src/MainTest.cpp
        src/parsers/Verkeersparser.cpp
        src/parsers/parser.cpp
        src/parsers/parseBanen.cpp
        src/parsers/parseVerkeerslicht.cpp
        src/parsers/parseVoertuigen.cpp
        src/DesignByContract.h src/Verkeerssituatie.cpp src/Verkeerssituatie.h src/Utility.h)

# Set source files for DEBUG target
set(DEBUG_SOURCE_FILES
        src/Verkeerslicht.cpp
        src/Voertuig.cpp
        src/Baan.cpp
        src/parsers/Verkeersparser.cpp
        src/parsers/parser.cpp
        src/parsers/parseBanen.cpp
        src/parsers/parseVerkeerslicht.cpp
        src/parsers/parseVoertuigen.cpp)

# Create RELEASE target
add_executable(Verkeerssituatie ${RELEASE_SOURCE_FILES})

# Create DEBUG target
add_executable(Verkeerssituatie_debug ${DEBUG_SOURCE_FILES})

# Link library
target_link_libraries(Verkeerssituatie_debug gtest)