/**
 * @file main.cpp
 * @brief This is a demonstration for homework 05 doxygen.
 * @details This project shows Doxygen, Cmake, and Github Pages working together.
 * @author Brandon Yi
 * @date 2021 February 01
 * 
 */

#include <iostream>


/**
 * Add two integers (brief)
 * 
 * Adds a and b, two integers (long description)
 * @param a integer
 * @param b integer
 * @returns integer sum of a and b
 */
int add(int a, int b) {
    return(a + b);
}


int main(int, char**) {
    std::cout << "Hello, world! Ver 2.1\n";
}
