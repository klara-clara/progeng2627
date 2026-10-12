#include <iostream>

int main(){
    double a, b, perimeter, area;

    std::cout << "write first number (one side of rectangle)" << std::endl;
    std::cin >> a;

    std::cout << "write second number (other side of rectangle)" << std::endl;
    std::cin >> b; 

    perimeter = 2 * a + 2 * b;
    area = a * b;

    std::cout << "the perimeter of your rectangle is: " << perimeter << std::endl;
    std::cout << "the area is: " << area << std::endl;

}