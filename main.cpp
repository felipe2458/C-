#include <iostream>

int main(){
    //* whole numbers (int)

    int x = 5;
    int y = 10;
    int sum = x + y;

    // std::cout << x << '\n';
    // std::cout << y << '\n';
    // std::cout << sum << '\n';
    

    int age = 15;
    int year = 2025;
    int days = 7;

    // std::cout << days << '\n';

    //* Number including decimal (double)

    double price = 10.99;
    double gpa = 2.5;
    double temperature = 98.6;

    // std::cout << price << '\n';

    //* Single character (char)
    char initial = 'M';
    char initial2 = 'J';
    char currency = '$';

    // std::cout << initial << initial2 << '\n';

    //* Boolean (bool = true or false)
    
    bool isStudent = false;
    bool power = true;
    bool forSale = true;

    //* String (std::string)

    std::string name = "Felipe";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << "Hello, " << name << "!\n";
    std::cout << "You are " << age << " years old.\n";

    return 0;
}