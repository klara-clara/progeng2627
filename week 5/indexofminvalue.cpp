#include <iostream>
#include <vector>
#include <cmath>

double min_vector_element(const std::vector<double>& vin){

    double minvel, min_in, i;
    //std::vector<int> index;
    if (vin.size()==0){
        return -1;
    }
    minvel = vin[i];
    for(int i = 0; i < vin.size(); i++){
        if (vin[i] <= minvel){
            min_in = i;
            minvel = vin[i];
        }
    }
    return min_in;

}

int main(){

    std::vector<double> v{3, 0.5, -1, -2};
    std::cout << min_vector_element(v) << std::endl;
    std::vector<double> v1{-1, 0.5, 2, 0, 5};
    std::cout << min_vector_element(v1) << std::endl;
    std::vector<double> v2{3, 5, 1, 2};
    std::cout << min_vector_element(v2) << std::endl;
}