#include <iostream>
#include <vector>
#include <cmath>

int search_vector(int n, const std::vector<int>& vin){

    int searchvalue, i, index;
    
    if (vin.size() == 0){
        return -1;
    }

    for(int i = 0; i < vin.size(); i++){
        if (vin[i] == n){
            index = i;
            return index;
        }
    }

    return -1;
    

}

int main(){

    std::vector<int> v{3, 1, -1, -2};
    std::cout << search_vector(1, v) << std::endl;
    std::vector<int> v1{-1, 5, 2, 0, 15};
    std::cout << search_vector(0,v1) << std::endl;
    std::vector<int> v2{3, 5, 1, 2};
    std::cout << search_vector(0, v2) << std::endl;
}