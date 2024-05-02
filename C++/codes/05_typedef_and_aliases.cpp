/*
        typedef = reserved keyword used to create an additional name (alias) for another data type.
        //                  New identifier for an existing type
        //                  Helps with readability and reduces typos
        //                  Use when there is a clear benefit
        //                  Replaced with 'using' (work better w/ templates)
*/
   
#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string string_t;

using int_t = int;

int main(){
    pairlist_t pairlist;
    string_t new_company = "Samsung Korea";
    int_t age = 25;
 
    // Adding sample data to the vector
    pairlist.push_back(std::make_pair("Apples", 10));
    pairlist.push_back(std::make_pair("Oranges", 20));
    pairlist.push_back(std::make_pair("Bananas", 15));
    pairlist.push_back(std::make_pair("Cherries", 25));

    // Output the content of the vector
    for (const auto& item : pairlist) {
        std::cout << "Item: " << item.first << ", Quantity: " << item.second << std::endl;
    }

    std::cout << new_company << '\n';
    std::cout << age << '\n';

    return 0;
}