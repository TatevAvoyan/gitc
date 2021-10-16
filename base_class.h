#pragma once
#include "iostream"

class User{
    int deafult_age;

public:
    User(int d_a){
        this->deafult_age = d_a;
    }

    ~User(){
        std::cout << "\nBase destructor\n";
    }

    void print_deafult_age(){
        std::cout << "Age - " << this->deafult_age << "\n";
    }
};