
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    int count = 0;
    for (int i=0; i < vin.size(); i++){
        if (vin[i] == s){
            count++;
        }
    }
    return count;
}




int main(){

    std::ifstream infile; 
    infile.open("text2.txt");

    std::vector<std::string> v1;
    std::vector<std::string> v_count;


    if (!infile.is_open()) {
        std::cout <<"error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp1;

    while(infile >> tmp1){
        v1.push_back(tmp1);
    }
    
    infile.close();

    infile.open("words.txt");
    std::vector<std::string> v2;


    if (!infile.is_open()) {
        std::cout <<"error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp2;

    while(infile >> tmp2){
        v2.push_back(tmp2);
    }

    
    infile.close();


    

    std::ofstream outfile;

    outfile.open("counting.txt");

    if (!outfile.is_open())
    {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < v2.size(); i++)
    {
        outfile << v2[i] << ": " << search_vector(v2[i], v1) << std::endl;
    }

    outfile.close();



    return EXIT_SUCCESS;

}
