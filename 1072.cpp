#include <iostream>  
using namespace std;  
int main() 
{ 
    int N , X, in = 0, out = 0;
  int interval_start =10,interval_end =20 ;
  cin>>N;
   for (int i = 1; i <= N; i++) {
      cin>>X;
   if (X >= interval_start && X <= interval_end) {
    in += 1;
   }else {
    out += 1;
   }
  }
  cout<<in<<" in"<<endl;
  cout<<out<<" out"<<endl;
 return 0; 
}
