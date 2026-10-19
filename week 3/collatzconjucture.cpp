#include <iostream>

int main(){
    int n, i=0, max;

    std::cout << "please enter a natural number" << std::endl;
    std::cin >> n;
    std::cout << n << "\t";
    max = n;

    while (n > 1){
        if (n % 2 == 0){
            n = n/2;
            std::cout << n << "\t";
            i=i+1;
        }
        else{
            n = 3*n + 1;
            std::cout << n << "\t";
            i=i+1;
            if (n > max){
                max = n;
            }
        }
    }
    
    std::cout << std::endl;
    std::cout << "number of steps: " << i << std::endl;
    std::cout << "greatest number: " << max << std::endl;

}