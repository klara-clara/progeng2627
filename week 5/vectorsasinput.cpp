#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int value, i, n;
    std::cout << "how long is your vector?" << std::endl;
    std::cin >> n;
    i=0;

    for (int value = 0; i < n ;i++){
        std::cout << "write a number" << std::endl;
        std::cin >> value;
        v.push_back(value);
    }
    
    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}