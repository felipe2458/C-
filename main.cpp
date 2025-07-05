#include <iostream>
#include <limits>

int sum(int num1, int num2){
    return num1 + num2;
}

int main(){
    int num1;
    int num2;

    std::cout << "Add two numbers together!" << std::endl;
    std::cout << "Num1:";
    std::cin >> num1;
    std::cout << "Num2:";
    std::cin >> num2;

    std::cout << "Result: " << sum(num1, num2) << std::endl;

    return 0;
}