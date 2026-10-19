#include <iostream>

int main(){
int days = 5, grandTotal = 0, bestDay = 1, bestDayMinutes = -1;
int day = 1,  session = -1, dayTotal = 0, sessionCount = 0;

    for (; day <= days; day++){

        std::cout << "Day " << day << std::endl;
        std::cout << "Enter study sessions in minutes" << std::endl;

        while (true){
            std::cout << "Session " << sessionCount + 1 << ":";
            std::cin >> session;

            if (session == 0) break;
            
            dayTotal = dayTotal + session;
            sessionCount++;
            
            std::cout << "Day " << day << " total time: " << dayTotal << " minutes" << std::endl;
            grandTotal = grandTotal + dayTotal;
        }
        
        
        if (sessionCount >= 0){
            std::cout << "Session count: " << sessionCount;
        }

        std::cout << std::endl;

        
        if (dayTotal > bestDayMinutes){
            bestDayMinutes = dayTotal;
            bestDay = day;
        }

        double avgpd = grandTotal / days ;

        std::cout << "\n---- Weekly Summary ----\n";
        std::cout << " Total study time: " << grandTotal << " minutes"<< std::endl;
        std::cout << " Average per day: " << avgpd << " minutes" << std::endl;
        std::cout << " Best day: Day " << bestDay << " " << bestDayMinutes << " minutes" << std::endl;

    }
}

