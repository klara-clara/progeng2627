#include <iostream>

int main(){
    int n=1;

    std::cin >> n;

    while( (-11<n) && (n<11)){
        // != means different or not equal
        std::cout << n << std::endl;
        std::cin >> n;
    }

}