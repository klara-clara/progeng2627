#include <iostream>

int main(){
    int n = 1, nominator = 0, denominator = 0, avg;

    std::cin >> n;

    while(n != 0){
        // != means different or not equal
        denominator = denominator + 1;
        nominator = nominator + n;
        avg = nominator / denominator;
        std::cout << "average is:"<< avg << std::endl;
        std::cin >> n;
    }

}