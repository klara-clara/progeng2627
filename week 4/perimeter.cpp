#include <iostream>
#include <cmath>

bool myoperations (double a, double b, double& perimeter, double& area){
    
    bool operations;
    
    if (a > 0){
        operations = true;
        area = a * b;
        perimeter = 2 * a + 2 * b;
    }

    return operations;

}

int main(){
    double a, b;
    a = 10;
    b = 12;
    
    double perimeter, area;

    if (myoperations(a, b, perimeter, area)){
        std::cout << "perimeter is:" << perimeter << std::endl;
        std::cout << "area is:" << area << std::endl;
    }
    std::cout << (myoperations(5, 6, perimeter, area) == true) << std::endl;
    std::cout << (myoperations(20, 4, perimeter, area) == true) << std::endl;
    std::cout << (myoperations(5, 16, perimeter, area) == true) << std::endl;
    std::cout << (myoperations(7, 80, perimeter, area) == true) << std::endl;
    std::cout << (myoperations(2, 15, perimeter, area) == true) << std::endl;

}
