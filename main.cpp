#include <iostream>

int main(){
    using namespace std;

    string name;
    int age;

    cout << "What`s your full name?:";
    getline(cin >> ws, name); //* serve pegar os espaços do nome

    cout << "What`s your age?:";
    cin >> age;

    cout << "Hello, " << name << endl;
    cout << "You are " << age << " years old" << endl;

    return 0;
}