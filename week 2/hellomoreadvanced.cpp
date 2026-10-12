#include <iostream>
#include <string>

int main(){
    std::cout << "hello " << std::endl;

    std::string user_name;
    std::string user_surname;

    // TODO: add another declaration
    // for a text variable called user_surname

    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;

    // TODO: add another printing instruction 
    // asking for the surname

    std::cout <<"what is your surname?" << std::endl;
    // reads the surname from the user
    std::cin >> user_surname;
    // stores it in variable user_surname

    // add a printing instruction that says hello followed by the
    // name and surname of the user

    std::cout << "hello, " << user_name << " " << user_surname << std::endl;
}
