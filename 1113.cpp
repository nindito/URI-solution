#include <iostream>

using namespace std;
int main(){
    int X, Y;

    do {

        scanf("%d%d", &X, &Y);
        if (X > Y) {
            printf("Decrescente\n");
        } else if (X < Y) {
            printf("Crescente\n");
        }
    } while (X != Y);

}
