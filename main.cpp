#include <iostream>
#include <vector>

//typedef  std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string string_t;
//typedef int num_t;

using string_t = std::string;
using num_t = int;

int main(){
    //pairlist_t pairList;

    string_t firstName = "Felipe";
    num_t age = 15;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}