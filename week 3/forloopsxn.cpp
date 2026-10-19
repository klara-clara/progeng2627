#include <iostream>

int main(){
    int n, i = 0, acc = 1, x; // initialisation of counter
    
    std::cin >> x >> n;

    for(int i = 0; i < n; i++){
        // i++ means i = i + 1
        acc = acc * x;        
        }
    std::cout << acc << std::endl;

}