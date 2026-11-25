#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>




int main(int argc, char* argv[]){
    
    for(int i = 0; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }
    
    std::ifstream infile; 
    infile.open(argv[1]);

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
    }

    infile.close(); 

    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }

}