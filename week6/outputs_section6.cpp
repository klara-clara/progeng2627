#include <iostream>
#include <fstream>


int main(){
    std::ofstream outfile;

    outfile.open("output.txt");
    // assosiates outfile -> file output.txt
    
    if (!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return -1;
    }
outfile << "hello, my name is tom riddle" << std::endl;

outfile.close();

}

