#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for (int c=0; c < n ; c++){
        
        for (int r =0; r < n; r++ ){
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}
