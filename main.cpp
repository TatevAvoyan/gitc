#include "iostream"
#include "child_class.h"

int main() {
    /*User user(18);
    user.print_deafult_age();*/

    John john("John", 18);
    John john1(8, 18);
    john1.print_friends_count();
    john.print_name();
    john.print_deafult_age();

    return 0;
}
