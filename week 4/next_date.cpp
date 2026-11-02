#include <iostream>

bool leap_year(int year){
    bool ly;

    if (year % 4 == 0){
        if ((year % 100 == 0) && (year % 400 == 0)){
            ly = true;
        }
        else if ((year % 100 == 0) && (year % 400 != 0)){
            ly = false;
        }
        else{
            ly = true;
        }
    }

    else{
        ly = false;
    }

    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
    // we *do not print* anything in the function
}// TODO: check whether the year is a leap year or not
    // store result in variable ly



void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if (m1 == 1) || (// TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
    // TODO: write a main to test the function
}