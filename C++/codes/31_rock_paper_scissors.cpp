#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;
    char keep_playing;

    std::cout << "Welcome to EJs Rock-Paper-Scissor Game!" << '\n';

    do{
        player = getUserChoice();
        std::cout << "Your choice is: ";
        showChoice(player);

        computer = getComputerChoice();
        std::cout << "Computer's choice: ";
        showChoice(computer);

        chooseWinner(player, computer);

        do{
            std::cout << "Play Again?: Y or N";
            std::cin >> keep_playing;
        }while(tolower(keep_playing) != 'y' && tolower(keep_playing) != 'n');
        
        if(tolower(keep_playing) == 'n'){
            break;
        }
    }while(true);
    
    return 0;
}
void showChoice(char choice){

	switch(choice){
		case 'r': std::cout << "Rock\n";
				  break;
		case 'p': std::cout << "Paper\n";
				  break;
		case 's': std::cout << "Scissors\n";
				  break;
	}
}

char getUserChoice(){
    char choice;
    
    do{
        std::cout << "What is your choice?" << '\n';
        std::cout << "R - Rock" << '\n';
        std::cout << "P - Paper" << '\n';
        std::cout << "S - Scissors" << '\n';

        std::cin >> choice;
    }while(tolower(choice) != 'r' && tolower(choice) != 'p' && tolower(choice) != 's');

    return tolower(choice);
}

char getComputerChoice(){

	srand(time(0));
	int num = rand() % 3 + 1;

	switch(num){
		case 1: return 'r';
		case 2: return 'p';
		case 3: return 's';
	}

	return 0;
}

void chooseWinner(char player, char computer){

	switch(player){
		case 'r': 	if(computer == 'r'){
						std::cout << "It's a tie!\n";
					}
					else if(computer == 'p'){
						std::cout << "You lose!\n";
					}
					else{
						std::cout << "You win!\n";
					}
					break;
		case 'p': 	if(computer == 'r'){
						std::cout << "You win!\n";
					}
					else if(computer == 'p'){
						std::cout << "It's a tie!\n";
					}
					else{
						std::cout << "You lose!\n";
					}
					break;
		case 's': 	if(computer == 'r'){
						std::cout << "You lose!\n";
					}
					else if(computer == 'p'){
						std::cout << "You win!\n";
					}
					else{
						std::cout << "It's a tie!\n";
					}
					break;
	}
}