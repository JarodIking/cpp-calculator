#include <iostream>
#include <cmath>

class Calculate {
    public:
        Calculate(){
            
        }

        double calculation(double a, char oper, double c){
           switch(oper){
                case '+':
                    return a + c;
                break;

                case '-':
                    return a - c;
                break;

                case '*':
                    return a * c;
                break;

                case '/':
                    return a / c;
                break;

                case '^':
                    return pow(a, c);

                default:
                    return 0;
           }
        };

        double extra(double a, char oper){
            switch(oper){
                case 'r':
                    return sqrt(a);

                case 'c':
                    return cos(a);

                case 'z':
                    return cin(a);


                default:
                    return 0;

            }
        };


};