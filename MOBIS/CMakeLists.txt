cmake_minimum_required(VERSION 3.8)
project(SKHynix)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES BinarySearchTree.c DoubleLinkedList.c Bits.c DFSBFS.c Sorting.c LinkedList.c Practice.c FunctionPointer.c Factorial.c MAXMUL.c Queue.c Stack.c LinkedList1.c CircuarQueue.c Permutation.c PriorityQueue.c DoubleLinkedList1.c Tree.c SelectSort.c Fibonacci.c Mergesort.c ArrayQueue.c CircuarQueue1.c Hanoi.c ArrayDeque.c LinkedQueue.c Stringexample.c 2Array.c GCD.c Dec2Hex.c 100!.c test.cpp)
add_executable(SKHynix ${SOURCE_FILES})