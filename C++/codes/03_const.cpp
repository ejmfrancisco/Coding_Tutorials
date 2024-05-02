#include <iostream>

int main(){
    /*
        The const keyword specifies that a variable's value is constant and it tells
        the compiler to prevent anything from modifying it.
    */
    const std::string THIS_IS_CONST = "God";
    std::cout << THIS_IS_CONST << '\n';

    const double PI = 3.14159;
    // PI = 420.69; // This will cause an error
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm " << '\n';
    return 0;
}