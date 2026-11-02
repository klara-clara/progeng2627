#include <iostream>
#include <cmath>

int main(){
    double x, n, exp=0, sum=0;
    std::cout << "write x and n" << std::endl;
    std::cin >> x >> n;

    while (n>=0){
        exp = std::pow(x, n);
        n = n-1;
        sum = sum + exp;
    }

    std::cout << "sum of powers of x is: " << sum << std::endl; 
}