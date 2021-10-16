#pragma once
#include "base_class.h"

class John : public User{
    std::string name;
    int friends_count;

public:
    John(std::string n, int d) : User(d){
        this->name = n;
    }
    John(int f_c, int d) : User(d){
        this->friends_count = f_c;
    }
    ~John(){
        std::cout << "\nChild destructor\n";
    }
    void print_name(){
        std::cout << "Name - " << this->name << "\n";
    }
    void print_friends_count(){
        std::cout << "friends count - " << this->friends_count << "\n";
    }
};