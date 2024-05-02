#include <iostream>

int main(){
    int students = 30;

    // addition
    // ------------------
    students = students + 1;
    students+=1;
    students++;

    std::cout << students << '\n';

    // subtraction
    // ------------------
    students = students - 1;
    students-=1;
    students--;

    // multiplication
    // ------------------
    students = students * 2;
    students*=2;

    // division
    // ------------------
    students = students / 2;
    students/=2;

    // modulus
    // ------------------
    int remainder = students % 3;
    std::cout << remainder << '\n';

    std::cout << students << '\n';

    return 0;
}