#include <iostream>

int main(){
    int n=1, acc = 0;

    std::cin >> n;

    while(n != 0){
        // != means different or not equal
        acc = acc + n;
        std::cout << "sum is:"<< acc << std::endl;
        std::cin >> n;
    }

}