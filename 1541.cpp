#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c;
	while(cin>>a && a!=0)
	{
		cin>>b>>c;
		cout<<(int)  sqrt((a*b)*(100/c))<<endl;
	}

	return 0;
}
