#include "iostream"
#include "func1.h"


void print_hello(){

    char hello;
    std::cin >> hello;
    switch (hello) {
        case 'hy' : std::cout << "Barev"; break;
        case 'ru' : std::cout << "Privet"; break;
        case 'en' : std::cout << "Hello"; break;
        default : std::cout << "Hi";
    }

   /* if ( w == "hy"){
        std::cout << "Barev";
    } else if (w == "ru"){
        std::cout << "Privet";
    } else if (w == "en"){
        std::cout << "Hello";
    } else{
        std::cout << "Hi";
    }*/

}
