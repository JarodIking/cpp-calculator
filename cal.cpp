#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include "cal.hpp"

using namespace std;

int main(){
    
    std::cout << "Please enter a format exactly as shown (a + b, a - b, a * b, a / b, a ^ b, r B)" << "\n";

    double a;
    char oper;
    double c = 0;
    double result;
    double result1;

    Calculate calculator;

    while(true){

        std::cin >> a;
        std::cin >> oper;

        if(oper == 'r' || oper == 'c' || oper == 'z'){
            result = calculator.extra(a, oper);
            std::cout << "Answer: " << result << "\n";

        } else {
            std::cin >> c;
            result = calculator.calculation(a, oper, c);
            std::cout << "Answer: " << result << "\n";

        }

    }


}


