#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    vout.clear();
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] < t){
            vout.push_back(vin[i]);
        } 
    }
}

int main(){
    std::vector<double> vin_a;
    std::vector<double> vin_b;
    std::vector<double> vout;
    double t;

    vin_a = {0,15,2,13,4,5,-2};
    vin_b = {4, 0, 6, 2};

    filter_v(vin_a, 10, vout);
    
    for (int i = 0; i < vout.size() ; i++){
        std::cout << vout[i] << "  ";
    }
    std::cout << std::endl;
    

    filter_v(vin_b, 5, vout);
    
    for (int i = 0; i < vout.size() ; i++){
        std::cout << vout[i] << "  ";
    }
    std::cout << std::endl;



}