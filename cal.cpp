#include <iostream>
#include <vector>
#include <string>
#include "cal.hpp"

using namespace std;

int main(){

    double a;
    char oper;
    double c;
    double result;

    Calculate calculator;

    while(true){
        std::cout << "Please enter a format exactly as shown (a + b, a - b, a * b, a / b, s A, r B)" << "\n";

        std::cin >> a >> oper >> c;

        result = calculator.calculation(a, oper, c);

        std::cout << result << "\n";
    }


}


