#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for (int c=1; c <= n ; c++){
        
        for (int r = 1; r <= n; r++ ){
            std::cout << r *c << "\t";
        }
        
        std::cout << std::endl;
    }
}
