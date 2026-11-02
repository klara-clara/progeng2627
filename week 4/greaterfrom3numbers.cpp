#include <iostream>

double mygreater(double in1, double in2, double in3){
    double greater;
    // variable that will store the result
    if (in1 > in2){
        if (in1 > in3){
            greater = in1;
        }
        else{
            greater = in3;
        }
    }

    else if (in1 < in2){
        greater = in2;
        if (in2 > in3){
            greater = in2;
        }
        else{
            greater = in3;
        }
    }
    

    else{
        greater = 0;
    }

    return greater;
}

int main(){
    std::cout << (mygreater(2, 7, 180) == 180) << std::endl;
    std::cout << (mygreater(50, 26, 3) == 50) << std::endl;
    std::cout << (mygreater(35, 40, 36) == 40) << std::endl;
    std::cout << (mygreater(50, 19, 52) == 52) << std::endl;
}
