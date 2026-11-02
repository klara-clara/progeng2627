#include <iostream>

int smallest_factor (int n){
    bool found_factor = false;
    int cf;
    for (int cf = 2; cf < n; cf++){
        if ((n % cf) == 0){
            found_factor = true;
            return 1;
        }
        
    }
}

int main(){
    int n;
    // initially no factors are known

    std::cout <<"please enter integer greater than 1" << std::endl;
    // we assume true
    std::cin >> n;

    
    if (smallest_factor (n) == 1){
        std::cout << "the number is not prime" << std::endl;
    }
    else {
        std::cout << "the number is prime" << std::endl;
    }
}