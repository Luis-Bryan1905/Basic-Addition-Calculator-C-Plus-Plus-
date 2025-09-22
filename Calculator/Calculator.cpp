// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int sum(int a, int b) //Function and input variables
{
    return a + b; // Return sum of A + B 
}

int main()
{
    //std::cout << "Hello World!\n";

    int a = 0;
    int b = 0;

    int run = 1; // Is game running?
    while (run)  // While game is running?
    {
        std::string input; // This Variable stores temporary input from the console
        std::cout << "Please Enter a value for A: " << std::endl; // Write to the console
        getline(std::cin, input); // Here is where we assign the incoming user input from the console to the variable "input"
        // The program now waits indefinitely for the user to input

        a = std::stoi(input); // Convert "input" string into integer for "A" variable

        std::string inputB; // This variable stores temporary input from the console
        std::cout << "Please Enter a value for B: " << std::endl; // Write to the console
        getline(std::cin, inputB); // Here is where we assign the incoming user input from the console to the variable "inputB"
        // The program now waits indefinitely for the user to input

        b = std::stoi(inputB); // Convert "inputB" string into integer for "B" variable

        std::cout << "The sum of A and B is " << sum(a, b) << std::endl; // Display final sum

        std::string Endinput; // This Variable stores temporary input from the console
        std::cout << "Press 0 to Exit, Press 1 to Continue..." << std::endl; // Write to the console
        getline(std::cin, Endinput); // Here is where we assign the incoming user input from the console to the variable "Endinput"
        // The program now waits indefinitely for the user to input

        run = std::stoi(Endinput); // Convert "Endinput" string into integer for "run" variable
        
    }

    return 0; // Program finished

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
