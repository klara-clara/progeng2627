#include <iostream>
 int main(){
    int n, rem;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    
    rem = n % 2;

    if (rem == 0){
        std::cout << "number is even" << std::endl;
    }

    else{
        std::cout <<"number is odd" << std::endl;
    }


 }