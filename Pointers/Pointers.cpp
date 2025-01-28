// This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

void testPointer() {
    string food = "Pizza"; // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food
    cout << "food: " << food << endl;  // Outputs the value of food (Pizza)
    cout << "&food: " << &food << endl;  // Outputs the memory address of food (0x6dfed4)
    cout << "ptr: " << ptr << endl;  // Output the memory address of food with the pointer (0x6dfed4)
    cout << "*ptr: " << *ptr << endl;
    cout << "&ptr: " << &ptr << endl;
}

int main()
{
    std::cout << "Hello World!\n";
    testPointer();
}
