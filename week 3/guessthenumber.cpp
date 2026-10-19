#include <iostream>
#include <string>

int main(){
    int n, max, min;
    std::string smallbig;

    std::cout << "please think of a number between 100 and 0" <<std::endl;
    
    max = 100;
    min = 0;
    n = (min+max)/2;

    while (smallbig != "correct"){

        std::cout << "is it " << n << " ? (Answer smaller/bigger/correct)" << std::endl;
        std::cin >> smallbig;

        if (smallbig == "smaller"){
            max = n - 1;
        }
        
        else if(smallbig == "bigger"){
            min = n + 1;
        }

        else if (smallbig == "correct") {
            std::cout << "Great! I guessed your number." << std::endl;
            break;
        }

        else {
            std::cout << "incorrect input" << std::endl;
            break;
        }
        
        n = (max+min)/2;

    }


}