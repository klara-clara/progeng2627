# include <iostream>

int main(){
    double n1, n2, product;
    // this line declares 3 variables of a NUMERICAL type
    // n1, n2, sum are the names of the variables
    // double is type representing general decimal numbers

    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;

    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    product = n1 * n2;
    // computed and stored in the variable sum
    // NOTE: sum = a+b means assigning the value of a+b to variable 'sum'

    std::cout << n1 << "x" << n2 << "=" << product << std::endl;

}