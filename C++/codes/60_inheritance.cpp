#include <iostream>

class Animal{
    public:
        bool alive;

    void eat(std::string animal){
        std::cout << "The " << animal << " eats." << '\n';
    }
};

class Dog : public Animal{
    public:

    void barks(){
        std::cout << "dog_1 barking." << '\n';
    }
};

class Cat : public Animal{
    public:
    
    void meow(){
        std::cout << "meow_1 meowing." << '\n';
    }
};

int main(){
    Dog dog_1;
    dog_1.alive = true; 
    std::cout << dog_1.alive << '\n';
    dog_1.eat("dog");
    dog_1.barks();

    Cat cat_1;
    cat_1.alive = true;
    std::cout << cat_1.alive << '\n';
    cat_1.eat("cat");
    cat_1.meow();

    return 0;
}