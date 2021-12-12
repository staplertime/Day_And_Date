#include <iostream>
#include <string>

//Day Function Variable Declaration
int g_usr_day;
int g_usr_month;
int g_usr_year;
std::string day = "null";
//Leap_Year Function Variable Declaration
bool g_result;
std::string leap_year_output;

void Day() {

    //finds first digits
    int n = g_usr_year;
    while (n > 100) {
        n = n / 10;
    }

    int D = g_usr_year % 100; //modulo finds last two digits
    int k = g_usr_day;
    int C = n;
    int m = 0;

    //Ensures March is when year starts
    if (g_usr_month == 1) {
        m = 11;
        D -= 1;
    }
    else if (g_usr_month == 2) {
        m = 12;
        D -= 1;
    }
    else {
        m = g_usr_month - 2;
    }

    int F= k + ((13*m-1)/5) + D + (D/4) + (C/4) - (2*C);
    int ans = F % 7;

    //Assigns day var
    if (ans == 0) {
        day = "Sunday";
    }
    if (ans == 1) {
        day = "Monday";
    }
    if (ans == 2) {
        day = "Tuesday";
    }
    if (ans == 3) {
        day = "Wednesday";
    }
    if (ans == 4) {
        day = "Thursday";
    }
    if (ans == 5) {
        day = "Friday";
    }
    if (ans == 6) {
        day = "Saturday";
    }
}
void Leap_Year() { 

    int test4 = g_usr_year % 4;
    int test100 = g_usr_year % 100;
    int test400 = g_usr_year % 400;
    int test_result = test4 + test100 + test400;

    if (test_result == 0) {
        g_result = true;
    }
    else if (test_result != 0) {
        g_result = false;
    }
    else {
        std::cout << "ERROR";
    }

    if (g_result == true) {
        leap_year_output = " was a leap year";
    }
    else if (g_result == false) {
        leap_year_output = " was not a leap year";
    }
}

int main() {

    //User Entry
    std::cout << "Enter Day: ";
    std::cin >> g_usr_day;
    std::cout << "Enter Month: ";
    std::cin >> g_usr_month;
    std::cout << "Enter Year: ";
    std::cin >> g_usr_year;

    Day();
    Leap_Year();

    std::cout << g_usr_year << "-" << g_usr_month << "-" << g_usr_day << " was a " << day 
    << ", and " << g_usr_year << leap_year_output << "\n";
    
    return 0;
}
