#include <iostream>
using namespace std;
int main(){
    int i, I, j, k;

    for ( i = 1,j =7; i <= 9; i += 2,j += 2) {
            for ( I = i, k = j; k >= (j-2); k--) {
                printf("I=%d J=%d\n", I, k);
            }
        }

    return 0;
}
