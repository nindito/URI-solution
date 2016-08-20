#include <iostream>  
using namespace std;  
int main() 
{ 
    int X, even = 0,odd = 0,positive = 0,negative = 0;
     for (int i = 1; i <= 5; i++) {
   cin>>X;
   if (X % 2 == 0) {
    even += 1;
   }
   if (X % 2 != 0) {
    odd += 1;
   }
   if (X > 0) {
    positive += 1;
   }
   if (X < 0) {
    negative += 1;
   }
   
  }
         cout<<even<<" valor(es) par(es)\n";
         cout<<odd<<" valor(es) impar(es)\n";
        cout<<positive<<" valor(es) positivo(s)\n";
        cout<<negative<<" valor(es) negativo(s)\n";
 return 0; 
}
