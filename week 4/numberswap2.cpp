#include <iostream>

// type void means we are not returning anything

void myswap(int& n1, int& n2){
    // added & as we want the parameters of the function to be linked to the variables in the main
    //in such a way that any changes to the parameters are reflected also in the variables in the main
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main(){
    int n1, n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}