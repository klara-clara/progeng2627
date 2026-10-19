#include <iostream>

int main(){
    int n = 0, max, min;

    std::cout << "please enter number" <<std::endl;
    std::cin >> n;

    max = n;
    min = n;
    std:: cout << "min so far: " << min << std::endl;
    std:: cout << "max so far: " << max << std::endl;

    while (n != 0){
        std::cout << "please enter number" <<std::endl;
        std::cin >> n;

        if (n > max){
            max = n;
        }
        
        else if(n < min){
            min = n;
        }
        std:: cout << "min so far: " << min << std::endl;
        std:: cout << "max so far: " << max << std::endl;

    }


}