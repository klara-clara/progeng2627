#include <iostream>


double mypow(double base, int exp){
    double result; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    result = 1;

    if (exp < 0){
        exp = -exp;
        for (int i = 0; i < exp; i++){
            result = result * base;
        }
        result = 1/result;
    }

    else{
        for (int i = 0; i < exp; i++){
            result = result * base;
        }
    }
    
    return result;
}


double mysop(double x, int n){
    double sum = 0; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)

    for (int i = 1; i <= n; i++){
        sum = sum + mypow(x, i);
  
    }
    
    return sum;
}


int main(){
    double x;
    int n;
    //std::cout << "write x and n" << std::endl;
    //std::cin >> x >> n;
    //std::cout << mysop(x, n) << std::endl;
    // this is not fully correct because we shouldn't use == between doubles
    std::cout << (mysop(2, 3) == 14) << std::endl;

}

/*
int main(){
    double x, n, exp=0, sum=0;
    std::cout << "write x and n" << std::endl;
    std::cin >> x >> n;

    while (n>=0){
        exp = mypow(x, n);
        n = n-1;
        sum = sum + exp;
    }

    std::cout << "sum of powers of x is: " << sum << std::endl; 
}
*/