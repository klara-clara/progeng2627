#include <iostream>
#include <fstream>


#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;
    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);
    std::vector<std::string> v;
    std::vector<std::string> v_new;

    if (!infile.is_open()){
        std::cout <<"error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();
    for (int i = (v.size() -1); i >= 0; i--){
        v_new.push_back (v[i]);
    }

    std::ofstream outfile;

    outfile.open("output.txt");
    // assosiates outfile -> file output.txt
    
    if (!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return -1;
    }
    outfile << "Look, I didn't want to be a half-blood." << std::endl;

    for (int n = 0; v_new.size() > n; n++){
        outfile << v_new[n] << std::endl;
    }
    


    outfile.close();
}