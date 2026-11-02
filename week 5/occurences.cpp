#include <iostream>
#include <vector>

int main(){
    int i, n, s, count;
    std::vector<int> v;
    std::vector<int> indices;
    std::cout << "write a number n" << std::endl;
    std::cin >> n;
    i=0;
    
    for (int value = 0; i < n ;i++){
        std::cout << "write a number" << std::endl;
        std::cin >> value;
        v.push_back(value);
    }
    
    std::cout << "write a number s" << std::endl;
    std::cin >> s;

    count = 0;


    for (int i = 0; i < n ;i++){
        if (v[i] == s){
            indices.push_back (i);
            count++;
        }
        
    }
    
    if (count == 0){
        std::cout << "there are no occurences of " << s << std::endl;
    }
    else{
        std::cout << s << " occured " << count << " times" << std::endl;
        std::cout << "the positions at which it occured are:" << std::endl;
        for (int j = 0; j < indices.size(); j++) {
            std::cout << indices[j] << " ";
        }
        
    }

}