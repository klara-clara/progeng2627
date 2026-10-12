#include <iostream>
int main(){
    int n, rem;
    std::cout << "enter a number" << std::endl;
    std::cin >> n;

    rem = n % 3;

    if (rem==0){
        std::cout << "the number is divisible by 3" << std::endl;
    }

    else{
        std::cout << "the number is not divisible by 3" << std::endl;
    }

}