cmake_minimum_required(VERSION 3.14)
project(cpp_feature_tester)

add_executable(cpp_feature_tester cpp_feature_tester.cpp)

set_property(TARGET cpp_feature_tester PROPERTY CXX_STANDARD 20)
set_property(TARGET cpp_feature_tester PROPERTY CXX_STANDARD_REQUIRED ON)
