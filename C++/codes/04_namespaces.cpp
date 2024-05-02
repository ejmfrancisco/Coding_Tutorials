#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    /*
        Namespace = provide a solution for preventing name conflicts on large projects.
    */

    using namespace first;
    std::cout << x << '\n';
    
    int x = 0;

    std::cout << second::x << '\n';
    std::cout << x << '\n';
    
    /*
    These one is depending on the program because std has so many entities which may
    result to naming conflict.

    using namespace std;

    cout << "working";
    */

    return 0;
}