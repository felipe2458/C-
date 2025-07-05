#include <iostream>

int main(){
    using namespace std;

    int age;

    cout << "What´s your age?: ";
    cin >> age;

    if(age >= 18){
        cout << "Welcome to site!";
    }else if(age < 0){
        cout << "You heven´t been born yet!";
    }else{
        cout << "Sorry, you`re too young!";
    }

    return 0;
}