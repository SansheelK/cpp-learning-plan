cmake_minimum_required(VERSION 3.14)
project(CppLearningPlan)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Week 1 - OOP Basics
add_executable(week01_bankaccount Week01_OOP_Basics/BankAccount/BankAccount.cpp)

# Week 2 - C++11 Features
# add_executable(week02_cpp11 Week02_CPP11_Features/main.cpp)

# Week 3 - C++14 and C++17 Features
#v add_executable(week03_cpp14_17 Week03_CPP14_17_Features/main.cpp)

# Week 4 - Projects
# add_executable(project1_basic_cli Week04_CPP_Projects/Project1_BasicCLITool/main.cpp)
# add_executable(project2_fileparser Week04_CPP_Projects/Project2_FileParser/main.cpp)


# This file declares all the executables in one place. You can still organize code neatly in folders, but no need for individual `CMakeLists.txt` inside each.
