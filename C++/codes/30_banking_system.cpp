#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance;
    int choice;

    do
    {
        std::cout << "*********************************************" << '\n';
        std::cout << "What transaction do you like to perform?:" << '\n'; 
        std::cout << "1: Check balance" << '\n';
        std::cout << "2: Withdraw" << '\n';
        std::cout << "3: Deposit" << '\n';
        std::cout << "4: Exit" << '\n';

        std::cin >> choice;

        std::cin.clear(); 
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;

        case 2: balance -= withdraw(balance);
            showBalance(balance);
            break;
        
        case 3: balance += deposit();
            showBalance(balance);
            break;
        case 4: std::cout << "Thanks for visiting!\n";
                break;

        default:
            std::cout << "Invalid Choice";
            break;
        }
    } while (choice != 4);
    
    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(){
    
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount:\n";
        return 0;
    }
}

double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}

