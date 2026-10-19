#include <iostream>
int main(){
    int n, i = 0;
    // int n - we have variable counter
    // counting how many times we print, initially we have printed 0 times

    std::cin>>n;

    // the following line begins a while loop
    // the while loop has a condition in parentheses, if condition true we enter the loop
    // if falsr, then the loop is not being executed

    while(i < n){
        std::cout << "hello" <<std::endl;
        i = i + 1;
        // after each print we increase counter by 1
    }
}