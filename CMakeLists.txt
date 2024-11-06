cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)
project(xnergy_gpio_module)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
add_compile_options(-Wall -Wextra -Wpedantic -g3)

# Compile charging station module as another library
add_library(charging_station question_1/charging_station/charging_station.cpp)
target_include_directories(charging_station PUBLIC question_1/charging_station question_1/message)

# Compile robot module as another library
add_library(robot question_1/robot/robot.cpp)
target_include_directories(robot PUBLIC question_1/robot question_1/message)

# Compile main application code
add_executable(main question_1/app/app.cpp)
target_link_libraries(main PUBLIC robot charging_station)
target_include_directories(main PUBLIC question_1/charging_station question_1/robot question_1/app question_1/message)
