#include <iostream>

int main (){
    std::cout << "hello" << std::endl;
    // we print hello, then print a newline

    std::cout << "goodbye" << std::endl;
    // we print goodbye, then print a newline

    std::string user_name;
    // std::string is the type of variable, this type of variable can contain text
    
    std::cout <<"wait! what is your name?" << std::endl;
    // printing instruction and end of the line

    std::cin >> user_name;
    // std::cin is the control input reads info from the keyboard and store is as "user_name"

    std::cout << "bye bye, " << user_name << "!" << std::endl;
    // prints fixed text "" and the user_name, followed ny a newline
}