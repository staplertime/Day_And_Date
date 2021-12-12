#include <iostream>
#include <string>

int main()
{

bool result = true;
int input_year = 1968;

std::cout << "Enter year to be tested: ";
std::cin >> input_year;

int test4 = input_year % 4;
int test100 = input_year % 100;
int test400 = input_year % 400;
int test_result = test4 + test100 + test400;

if (test_result == 0) {
    result = true;
}
else if (test_result != 0) {
    result = false;
}
else {
    std::cout << "ERROR";
}

if (result == true) {
    std::cout << input_year << " is a leap year";
}
else if (result == false) {
    std::cout << input_year << " is not a leap year";
}

return 0;

}
