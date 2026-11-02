#include <iostream>

double mygreater(double in1, double in2){
    double greater;
    // variable that will store the result
    if (in1 > in2){
        greater = in1;
    }
    else if (in1 < in2){
        greater = in2;
    }

    else{
        greater = 0;
    }

    return greater;
}

int main(){
    std::cout << (mygreater(2, 7) == 7) << std::endl;
    std::cout << (mygreater(3, 26) == 26) << std::endl;
}
