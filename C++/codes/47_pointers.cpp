#include <iostream>

int main() {

    // pointers = variable that stores a memory address of another variable
    //                    sometimes it's easier to work with an address         

    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 24;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizzas << '\n';

    // Iterate through the array using the pointer
    while (*pFreePizzas != "") {
        std::cout << *pFreePizzas << '\n';
        pFreePizzas++; // Move to the next element
    }

    return 0;
}