#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	float n1,total = 0,average = 0;
  int totalNumber = 0;
  
  for (int i = 1; i <= 6; i++) {
   cin>>n1;
   if (n1 > 0) {
    totalNumber += 1;
    total += n1;
   }
  }
  average = total / totalNumber;
  
  cout<<totalNumber<<" valores positivos\n";
  cout<<fixed<<setprecision(1)<<average<<endl;
  return 0;
}
