#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    vout=vin1;
    for (int i = 0; i < vin2.size();i++){
        vout.push_back(vin2[i]);
    }
    
}

int main(){
    std::vector<int> vin_a;
    std::vector<int> vin_b;
    std::vector<int> vout;
    
    vin_a = {0,15,2,13,4,5,-2};
    vin_b = {4, 0, 6, 2};

    append_vectors(vin_a, vin_b, vout);

    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i]<< std::endl;
    }

}