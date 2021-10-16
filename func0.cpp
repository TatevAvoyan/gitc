#include "iostream"
#include "func0.h"

void print_struct(User *n){

    std::cout << "Name - " << n->name << "\n";
    std::cout << "Age - " << n->age;
}