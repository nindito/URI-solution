#include <iostream>
#include<iomanip>

using namespace std;

int main(){
   double s = 0;
	double x = 2;

	for (int i = 3; i <= 39; i += 2, x *= 2)
	{
		s = s + i/x;
	}

	s++;
	cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
