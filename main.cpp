#include "iostream"
#include "string"



void find(){
    std::string lorem;
    std::cout << "Enter your text \n";
    std::cin >> lorem;

/*  lorem.insert();
    lorem.replace();
    lorem.insert();

    */

    auto x = lorem.find("dummy");
    lorem.replace();
    std::cout << x;
}

int main() {

    find();

    return 0;
}
