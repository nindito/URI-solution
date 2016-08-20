#include <iostream>

#include <vector>

using namespace std;

void fib(vector < unsigned long long int > &v)
{
	unsigned long long a=0,b=1,c=1;
	v.push_back(a);
	v.push_back(b);
	
	for(int i=2;i<61;i++)
	{
		c=a+b;
		v.push_back(c);
		a=b;
		b=c;
	}
}

int main()
{
	int t,x;
	  vector <unsigned long long int> v;
	fib(v);
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x;
		cout<<"Fib(" << x << ") = "<<v[x]<<endl;
	}
	return 0;
}


