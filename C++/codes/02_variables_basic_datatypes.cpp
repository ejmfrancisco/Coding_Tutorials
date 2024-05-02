#include <iostream>

int main(){
    /*
        Initial introduction
    */
    int x; //declaration
    int y = 6;
    x = 5; //assignment

    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y <<std::endl;
    std::cout << sum << '\n';
    
    /*
        Data Types Samples
    */

    // integer (whole number)

    int age = 24;
    int year = 1999;
    int birthday = 25.1;

    std::cout << birthday <<std::endl;

    // double (number including decimals)

    double price = 3.69;

    std::cout << price <<std::endl;

    // char (single character)

    char studentGrades = 'A';
    char notChar = 'B'; // 'AB'
    char currency = '$';

    std::cout << currency;

    // boolean (true or false)

    bool stateTrue = true;
    bool stateFalse = false;

    std::cout << std::endl << stateFalse << std::endl;

    // string (objects that represens a sequence of text)
    std::string name = "EJ CALIWAG";

    std::cout << "Hello, " << name;

    return 0;
}