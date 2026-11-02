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

void sort_three_numbers (double& s1, double& s2, double& s3){
    if (s2 < s1){
        if (s3 < s2){
            myswap(s1, s3);
        }
        else if (s3 < s1){
            myswap(s1, s2);
            myswap(s2, s3);
        }
        else{
            myswap(s1, s2);
        }
        
    
    }
    else if (s2 > s1){
        if (s3 < s1){
            myswap(s1, s3);
            myswap(s2, s3);
        }

        else if ((s3 > s1) && (s3 < s2)){
            myswap(s2, s3);
        }
  
    }

}

int main(){
    double a, b, c;
    std::cout << "please enter three numbers" << std::endl;
    std::cin >> a >> b >> c;

    std::cout << "input: " << a << ", " << b << ", " << c <<std::endl;

    sort_three_numbers(a,b,c);
    std::cout << "sorted: " << a << ", " << b << ", " << c <<std::endl;

}