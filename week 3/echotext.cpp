#include <iostream>
#include <string>

int main(){
    std::string text;
    std::cin >> text;

    while( (text != "STOP") && (text != "Stop") && (text != "stop") ){
        // != means different or not equal
        std::cout << text << std::endl;
        std::cin >> text;
    }

}