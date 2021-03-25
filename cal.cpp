#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include "cal.hpp"
#include "sstream"
using namespace std;

int main(){
    
    std::cout << "Please enter a number and press enter, than enter a simple operater(+, -, *, /, ^) and press enter, enter second number and press enter." << "\n" << "For advanced calculations (square root, cosinus, sinus), second number not required. Enter first number and press enter, enter operater(r for root, c for cos, and s for sin) and press enter. If incorrect operater is entered, answer will default to 0." << "\n" << "Press ctrl+c twice to exit" << "\n";

    double a;
    char oper;
    double c;
    double result;

    Calculate calculator;

    while(true){

        std::cin >> a;
        if(!cin){
            std::cout << "Please enter a numerical value" << "\n";
            cin.clear();
            cin.ignore(1, '\n');
        } else {
            std::cin >> oper;
            
            if(oper == 'r' || oper == 'c' || oper == 'z'){
                result = calculator.extra(a, oper);
                std::cout << "Answer: " << result << "\n";
                cin.clear();
            } else {
                std::cin >> c;
                if(!cin){
                    std::cout << "Please enter a numerical value, first re-enter equation" << "\n";
                    cin.clear();
                    cin.ignore(1, '\n');
                } else {
                    result = calculator.calculation(a, oper, c);
                    std::cout << "Answer: " << result << "\n";
                    cin.clear();
                }
            }
        }
    }
}


