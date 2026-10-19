#include <iostream>

int main(){
    int n = 1, count = 0, divisor = 1, reminder, n_initial;

    std::cin >> n;
    std::cin >> divisor;

    n_initial = n;

    while(n >= divisor){
        // != means different or not equal
        n = n - divisor;
        count = count + 1;
    }
    reminder = n_initial - count * divisor;
    std::cout << n_initial << " divided by "<< divisor << " is " << count << std::endl;
    std::cout << " reminder is " << reminder << std::endl;

}