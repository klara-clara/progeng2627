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
    return 0;
}


int main(){
    int a, b, i;
    // initially no factors are known

    std::cout <<"please enter two integers greater than 1" << std::endl;
    // we assume true
    std::cin >> a >> b;

    std::cout << a << " " << b << std::endl;

    if (a > b){
        for (i = b; i < a; i++){
            smallest_factor (i);
            if (smallest_factor (i) == 0){
                std::cout << i << std::endl;
            }
        }
    }

    else if (b > a){
        for (i = a+1; i < b; i++){
            smallest_factor (i);
            if (smallest_factor (i) == 0){
                std::cout << i << std::endl;
            }
        }
    }

    
    
}