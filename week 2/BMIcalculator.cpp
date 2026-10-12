#include <iostream>
int main(){
    double weight, height, BMI;
    std::cout << "what is your weight (in kilograms)?" << std::endl;
    std::cin >> weight;

    std::cout <<"what is your height (in metres)?" <<std::endl;
    std::cin >> height;

    BMI = weight / (height*height);

    std::cout << "your BMI is " << BMI <<std::endl;

}