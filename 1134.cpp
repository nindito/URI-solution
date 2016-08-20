#include <iostream>

using namespace std;
int main(){

       int X = 0, fuel = 0,
            customerAlcohol = 0,
            customerGasolin = 0,
            customerDisel = 0;

        while (X != 4) {
            scanf("%d", &X);
            if (X == 1) {
                customerAlcohol+=1;
            }else if (X == 2) {
                customerGasolin += 1;
            }else if (X == 3) {
                customerDisel += 1;
            }

        }

        
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", customerAlcohol);
        printf("Gasolina: %d\n", customerGasolin);
        printf("Diesel: %d\n", customerDisel);

}
