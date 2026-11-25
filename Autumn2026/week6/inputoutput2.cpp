#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    std::string inputfilename;
    std::cout << "enter name of input file" << std::endl;
    std::cin >> inputfilename;

    std::string outputfilename;
    std::cout << "enter name of output file" << std::endl;
    std::cin >> outputfilename;
    
    infile.open(inputfilename);

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    std::ofstream outfile;

    outfile.open(outputfilename);
    
    
    if (!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return -1;
    }
    outfile << "Look, I didn't want to be a half-blood." << std::endl;

    for (int n = 0; v.size() > n; n++){
        outfile << v[n] << std::endl;
    }
    


    outfile.close();
}