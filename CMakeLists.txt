cmake_minimum_required(VERSION 3.7)
project(CPPRevision)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp mystringfunctions.cpp "static local and global.cpp" testreference.cpp friendfunction.cpp TheFriend.cpp TheFriend.h "scoping operator.cpp" stldemo.cpp virtualfunction.cpp FunctionPointers.cpp "exam question1 reference and virtual functions.cpp" copyconstructor.cpp assignmentoperator.cpp ConversionConstructor.cpp OperatorOverloading.cpp OperatorOverloading2.cpp TemplateClass.cpp testFunctors.cpp exceptions.cpp LambdaFunction.cpp slicingproblem.cpp MusicalDuck.cpp LastLecture.cpp StupidPointer.cpp SmarterPointer.cpp stltest.cpp test.cpp const.cpp)
add_executable(CPPRevision ${SOURCE_FILES})