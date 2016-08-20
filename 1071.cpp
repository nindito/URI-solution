#include <iostream>  
using namespace std;  
int main() 
{ 
  int X,Y,total=0;
  cin>>X>>Y;
   if (X > Y) {
    for (int i = X - 1; i > Y; i--) {
     if (i % 2 != 0) {
      total += i;
     }
    }
   }else {
    for (int i = Y - 1; i > X; i--) {
     if (i % 2 != 0) {
      total += i;
     }
    }
   }
   cout<<total<<endl;
 return 0; 
}
