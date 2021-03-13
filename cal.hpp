#include <iostream>


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

                default:
                    return 0;
           }
        }

};