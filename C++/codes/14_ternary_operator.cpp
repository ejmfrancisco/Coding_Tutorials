#include <iostream>

int main(){
   // ternary operator ?: = replacement to an if/else statement
   // condition ? expression1 : expression2;

//    int grade = 60;
//    grade >= 60 ? std::cout << "You pass!" << '\n' : std::cout << "You fail!" << '\n';

//    int number = 9;
//    number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

   bool hungry = false;
//    hungry ? std::cout << "You are hungry" : std::cout << "You are full";
   std::cout << (hungry ? "Eat something" : "Drink water") << std::endl;

   return 0;
}