#include <iostream>

int main (){
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;
    // operator % computes the reminder of the integer division
    // the reminder it will either be 0 or 1

    std::cout <<"in the following line 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;

}