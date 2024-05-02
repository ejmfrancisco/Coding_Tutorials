#include <iostream>

int main()
{
    // Array = a data structure that can hold multiple values
    // values are accessed by an index number
    // Can only contain values with the same datatype
    // Can declare an array but size is needed
    
    std::string cars[3] = {"Corvette", "Mustang", "Camry"};

    // Re-assign value
    cars[0] = "Porsche";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}