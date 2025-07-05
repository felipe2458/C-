#include <iostream>
#include <limits>

int main(){
    using namespace std;

    int number;
    int max = 2147483647;
    char finish = 'n';

    do{
        cout << "enter a number and watch it go down to 0!" << endl;
        cin >> number;

        while(cin.fail() || number <= 0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please choose a number between 1 and " << max << endl;
            cin >> number;
        }

        while(number > 0){
            number--;
            cout << number << endl;
        }

        cout << "Do you want to continue? [y/n]" << endl;
        cin >> finish;

        while(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter y or n" << endl;
            cin >> finish;
        }

        while(finish != 'y' && finish != 'Y' && finish != 'n' && finish != 'N'){
            cout << "Please enter y or n" << endl;
            cin >> finish;
        }

    }while(finish == 'y' || finish == 'Y');

    return 0;
}