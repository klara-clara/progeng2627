#include <iostream>
int main(){
    double tempC, tempF;
    std::cout << "what is the temperature in Celcius?" << std::endl;
    std::cin >> tempC;

    tempF = tempC * 1.8 + 32;

    std::cout << "the temperature in Fahrenhait is: " << tempF << std::endl; 

}