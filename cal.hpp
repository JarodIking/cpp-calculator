#include <iostream>
#include <cmath>

class Calculate {
    public:
        Calculate(){
            
        }

        double calculation(double refA, char refOper, double refC){
           switch(refOper){
                case '+':
                    return refA + refC;
                break;

                case '-':
                    return refA - refC;
                break;

                case '*':
                    return refA * refC;
                break;

                case '/':
                    return refA / refC;
                break;

                case '^':
                    return pow(refA, refC);

                default:
                    return 0;
           }
        };

        double extra(double refA, char refOper){
            switch(refOper){
                case 'r':
                    return sqrt(refA);

                case 'c':
                    return cos(refA);

                case 's':
                    return sin(refA);


                default:
                    return 0;

            }
        };


};