cmake_minimum_required(VERSION 3.24)

add_executable(25_4_1_Med_Oper_Sim main.cpp ${MY_INCLUDE_DIR}/coordinates.h)

target_include_directories(25_4_1_Med_Oper_Sim PUBLIC ${MY_INCLUDE_DIR})