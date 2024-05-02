#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter some names: ";
    std::getline(std::cin, name);
    
    // Get string length
    long str_len = name.length();
    std::cout << "Length of the entered name: " << str_len << std::endl;

    if(str_len > 12){
        std::cout << "Name can't be bigger than 12 chars" << std::endl;
        return 1;
    }
    
    // return if the string is empty or not
    bool is_empty = name.empty();
    std::cout << is_empty << std::endl;

    // Append a string
    name.append("@gmail.com");
    std::cout << "Email suggested is "<< name << '\n';

    // return a character at a given position
    std::cout << name.at(1) << '\n';

    // insert
    name.insert(0, "!");
    std::cout << name << '\n'; 

    // Find
    std::cout << name.find("s") << '\n';

    // erase
    name.erase(0,2);
    std::cout << name << '\n';

    // clear the string variable
    name.clear();
    std::cout << name << '\n';


    return 0;
}