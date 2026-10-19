#include <iostream>

int main(){
    int c=0, r, n;
    std::cin >> n;

    while (c < n){
        r=0;

        while (r < n){
            std::cout << "*";
            r++;
        }
        
        std::cout << std::endl;
        c++;
    }
}
