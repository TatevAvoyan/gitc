#include "iostream"

void print(int start, int end){
    if(start <= end ){
        if(start % 2 == 0){
            std::cout << start << "\n";
        }
        print(++start, end);
    }
}

int main() {

    print(1, 20);

    return 0;
}
