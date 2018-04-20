cmake_minimum_required(VERSION 2.8)
project(jrpc_server)
set(source main.cpp
	Server.cpp)
set(headers Server.h)
add_executable(${PROJECT_NAME} ${source} ${headers})
