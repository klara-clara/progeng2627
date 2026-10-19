#include <iostream>

int main(){
    int n;
    bool found_factor = false;
    // initially no factors are known

    std::cout <<"please enter an integer greater than 1" << std::endl;
    // we assume true
    std::cin >> n;

    //cf = candidate factor
    for (int cf = 2; cf < n; cf++){
        if ((n % cf) == 0){
            found_factor = true;
            // we found a factor
        }

    }
    if (found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}