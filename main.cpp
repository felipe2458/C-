#include <iostream>

namespace first{
    int x = 10 + 23;
}

namespace second{
    int x = 100 + 323;
}

int main(){
    using namespace std;
    using namespace first;

    //* int x = 0; caso tenha o: using namespace first e o: int x = 0; quando for usar a variavel x, sera usado o que está no escopo do int main(){}

    // std::cout << x;
    // para usar isso: std::cout << first::x; não é preciso usar o: using namespace first;

    cout << x;

    return 0;
}