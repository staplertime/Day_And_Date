#include <iostream>
/* F=k + [(13*m-1)/5] + D + [D/4] + [C/4]-2*C
k is day of month
m is month no.
D ks last two digits of year
C is the first two digits of year
March is 1, February is 12
Sunday is 0, Saturday is 6 */

int main() {

int usr_day = 0;
int usr_month= 0;
int usr_year = 0;

//User Entry
std::cout << "Enter Day: ";
std::cin >> usr_day;
std::cout << "Enter Month: ";
std::cin >> usr_month;
std::cout << "Enter Year: ";
std::cin >> usr_year;

//finds first digits
int n = usr_year;
while (n > 100) {
    n = n / 10;
}

int D = usr_year % 100; //modulo finds last two digits
int k = usr_day;
int C = n;
int m = 0;

//Ensures March is when year starts
if (usr_month == 1) {
    m = 11;
    D -= 1;
}
else if (usr_month == 2) {
    m = 12;
    D -= 1;
}
else {
    m = usr_month - 2;
}

int F= k + ((13*m-1)/5) + D + (D/4) + (C/4) - (2*C);
int ans = F % 7;

//Prints Day
if (ans == 0) {
    std::cout << "Sunday\n";
}
if (ans == 1) {
    std::cout << "Monday\n";
}
if (ans == 2) {
    std::cout << "Tuesday\n";
}
if (ans == 3) {
    std::cout << "Wednesday\n";
}
if (ans == 4) {
    std::cout << "Thursday\n";
}
if (ans == 5) {
    std::cout << "Friday\n";
}
if (ans == 6) {
    std::cout << "Saturday\n";
}
}

/* DEBUGGING   
std::cout << F << " F\n" << k << " k\n" << m << " m\n" << D << " D\n" << C << " C\n";
std::cout << ans;
*/