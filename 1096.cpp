#include <iostream>
using namespace std;
int main(){
    int i, I, J;

    for ( i = 1; i <= 9; i += 2) {
            for ( I = i,J = 7; (J >= 5); J-=1) {
                printf("I=%d J=%d\n", I, J);

            }
        }

    return 0;
}

