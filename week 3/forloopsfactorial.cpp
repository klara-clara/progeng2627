#include <iostream>

int main(){
    int n, acc = 1, i; // initialisation of counter
    
    std::cin >> n;

    for(int i = 0; i < n; i++){
        // i++ means i = i + 1
        acc = acc * (n-i);        
        }

    if (n==0){
        std::cout << 1 << std::endl;
    }
    else{
    std::cout << acc << std::endl;
    }

}