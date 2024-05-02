/*
    Alternative for using many "else if" statements.
*/
#include <iostream>

int main() 
{
   char grade;

   do
   {
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "Can do better";
            break;
        case 'F':
            std::cout << "There is always a second chance!";
            break;
        default:
            std::cout << "Please only enter in a letter grade (A-F)" << '\n';
   }

   } while (true);
   
   return 0;
}