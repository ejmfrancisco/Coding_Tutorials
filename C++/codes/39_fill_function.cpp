#include <iostream>

int main(){
    // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)

    const int SIZE = 102;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "macaroni");
    fill(foods + (SIZE/3)*2, foods + SIZE, "chicken");

    for (int i = 0; i < SIZE; i++){
        std::cout << i << ": "<< foods[i] << std::endl;
    }
    return 0;
}