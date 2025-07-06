#include <iostream>

struct Human{
    Human(std::string name = "Human", int age = 0, float height = 0.7f, float weight = 0.5f){
        this->name = name;
        this->age = age;
        this->height = height;
        this->weight = weight;
    }

    std::string name;
    int age;
    float height;
    float weight;
};

int main(){
    Human person("Felipe", 15, 1.75f, 70.0f);

    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Height: " << person.height << std::endl;
    std::cout << "Weight: " << person.weight << std::endl;
    std::cout << std::endl;

    return 0;
}