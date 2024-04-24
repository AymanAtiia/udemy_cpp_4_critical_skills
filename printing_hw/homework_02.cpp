/*
Homework 2#: Write code to print the following
A) A triangle with angel 90 degree
*/

#include<iostream>
#include <string>
using namespace std;

int main()
{
	int rows = 5; // Total number of rows in the pyramid

    // Loop through each row
    for (int i = 0; i < rows; ++i) {
        // Print leading spaces for each row
        for (int space = 0; space < rows - i - 1; ++space) {
            std::cout << "  "; // Two spaces for better alignment
        }

        // Print asterisks for each row. The number of asterisks is 2*i + 1
        for (int star = 0; star < 2 * i + 1; ++star) {
            std::cout << "* ";
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }

}
