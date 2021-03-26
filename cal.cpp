#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include "cal.hpp"
#include "sstream"
using namespace std;

int main(){
    
    //print instruction for user
    std::cout << "Please enter a number and press enter, than enter a simple operater(+, -, *, /, ^) and press enter, enter second number and press enter." << "\n" << "For advanced calculations (square root, cosinus, sinus), second number not required. Enter first number and press enter, enter operater(r for root, c for cos, and s for sin) and press enter. If incorrect operater is entered, answer will default to 0." << "\n" << "Press ctrl+c twice to exit" << "\n";

    //variables
    double a;
    char oper;
    double c;
    double result;

    // references
    double& refA      = a;
    char& refOper     = oper;
    double& refC      = c;
    double& refResult = result;


    //call and run class
    Calculate calculator;

    while(true){

        std::cin >> refA;
        if(!cin){
            std::cout << "Please enter a numerical value" << "\n";
            cin.clear();
            cin.ignore(1, '\n');
        } else {
            std::cin >> refOper;
            
            if(refOper == 'r' || refOper == 'c' || refOper == 'z'){
                refResult = calculator.extra(refA, refOper);
                std::cout << "Answer: " << refResult << "\n";
                cin.clear();
            } else {
                std::cin >> refC;
                if(!cin){
                    std::cout << "Please enter a numerical value, first re-enter equation" << "\n";
                    cin.clear();
                    cin.ignore(1, '\n');
                } else {
                    refResult = calculator.calculation(refA, refOper, refC);
                    std::cout << "Answer: " << result << "\n";
                    cin.clear();
                }
            }
        }
    }
}


