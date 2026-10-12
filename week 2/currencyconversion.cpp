#include <iostream>
 int main(){
   double pounds, euro;
   std::cout << "currency conversion calculator: pounds to euros" << std::endl;
   std::cout << "how many pounds do you have?" << std::endl;
   std::cin >> pounds;

   euro = pounds * 1.18;

   std::cout << "you have: " << euro << " euro" <<std::endl;



 }