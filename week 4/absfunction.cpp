#include <iostream>

double myabs(double in){
    // name of the function we create

    double abs;
    // a name

    if (in<0){
        abs = -in;
    }
    else{
        abs = in;
    }

    return abs;
}


int main(){
    double n;
    
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
    // we call for our personally developed function
}