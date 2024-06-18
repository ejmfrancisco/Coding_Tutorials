#include <iostream>

class Human{
    public:
        std::string skin_tone;
        std::string gender;
        int age;

        void eat(){
            std::cout << "Human is eating." << '\n';        
        }

        void sleep(){
            std::cout << "Human is sleeping." << '\n';        
        }

        void drink(){
            std::cout << "Human is drinking." << '\n';        
        }
};

int main(){
    Human human_1;
    human_1.skin_tone = "fair";
    human_1.gender = "Man";
    human_1.age = 25;

    std::cout << human_1.skin_tone << '\n';
    std::cout << human_1.gender << '\n';
    std::cout << human_1.age << '\n';

    human_1.eat();
    human_1.sleep();
    human_1.drink();
    
    return 0;
}