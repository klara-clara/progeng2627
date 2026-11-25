
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i=0; i < vin.size(); i++){
        if (vin[i] == s){
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
        vout=vin1;
        for (int i=0; i < vin2.size(); i++){
            if (search_vector(vin2[i], vin1) == -1){
                vout.push_back(vin2[i]);
            }
        }
    }


void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        if (search_vector(vin1[i], vin2) >= 0){
            vout.push_back(vin1[i]);
        }
    }
}


int main(){

    std::ifstream infile; 
    infile.open("warehouse1.txt");
    std::vector<std::string> v1;


    if (!infile.is_open()) {
        std::cout <<"error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp1;

    while(infile >> tmp1){
        v1.push_back(tmp1);
    }

    infile.close();

    infile.open("warehouse2.txt");
    std::vector<std::string> v2;


    if (!infile.is_open()){
        std::cout <<"error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp2;
    while(infile >> tmp2){
        v2.push_back(tmp2);
    }

    infile.close();


    std::vector<std::string> v_union;
    std::vector<std::string> v_intersection;

    union_vector(v1, v2, v_union);
    intersection_vector(v1, v2, v_intersection);


    std::ofstream outfile;

outfile.open("union.txt");

if (!outfile.is_open())
{
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE;
}

for (int i = 0; i < v_union.size(); i++)
{
    outfile << v_union[i] << std::endl;
}

outfile.close();


outfile.open("intersection.txt");

if (!outfile.is_open()){
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE;
}

for (int i = 0; i < v_intersection.size(); i++){
    outfile << v_intersection[i] << std::endl;
}

outfile.close();

return EXIT_SUCCESS;

}
