#include <iostream>

int main(){
    // foreach loop = loop that eases the traversal over an 
    //                            iterable data set

    std::string cars[] = {"Porsche", "Camaro", "Mustang"};

    for(std::string car : cars){
        std::cout << car << '\n';
    }
    return 0;
}