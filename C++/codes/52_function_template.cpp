#include <iostream>

template <typename T, typename U>
auto max(T x, U y){
    return (x > y) ? x : y;
}
int main(){
    // function template = describes what a function looks like.
    // Can be used to generate as many overloaded functions as needed, each using different data types.


    // Ordinary statement

    // int max(int x, int y){
    //     return (x > y) ? x : y;
    // };
    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.2) << '\n';
    std::cout << max('1', '2') << '\n';
 
    return 0;
}

