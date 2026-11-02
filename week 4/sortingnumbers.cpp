#include <iostream>
#include <string>

void myswap(double& n1, double& n2){
    // added & as we want the parameters of the function to be linked to the variables in the main
    //in such a way that any changes to the parameters are reflected also in the variables in the main
    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sort_two_numbers (double& s1, double& s2){
    if (s2 < s1){
        myswap(s1, s2);
    }

}

int main(){
    double a, b;
    std::cout << "please enter two values" << std::endl;
    std::cin >> a >> b;

    std::cout << "input: " << a << ", " << b <<std::endl;

    sort_two_numbers(a,b);
    std::cout << "sorted: " << a << ", " << b <<std::endl;

}