#include <iostream>
#include <ctime>

int main(){
    int human_num;
    int tries = 0;
    char play_again;

    srand(time(NULL));

    int computer_guess = (rand() % 6) + 1;

    do{
        do{
        std::cout << "Enter a number from 1-6: ";
        std::cin >> human_num;
        tries++;
        }while(human_num <= 0 || human_num >=7 && tries != 3);

        if(tries <= 3 && tries > 0){
            std::cout << "Computer Said: " << computer_guess << "\n";
            std::cout << "Your number: " << human_num << "\n";

            if(human_num ==  computer_guess){
                std::cout << "You won! Congratulations" << "\n";
            }
            else{
                std::cout << "Try again next time" << "\n";
            }
        }
        else{
            std::cout << "Exceeded number of tries!" << "\n";
        }
        
        std::cout << "Play again? (Y or N):" << "\n";
        std::cin >> play_again;

        if (tolower(play_again) == 'n'){
            std::cout << "Good game!" << "\n";
            break;
        }
        tries = 0;
        
    }while(true);

    return 0;
}