#include <iostream>     
using namespace std;
int main()
{
	int min = 21, b = 0, a, i,n;
	cin>>n;
for (i = 1; i <= n; i++) {
			cin>>a;
			if(min > a) {
				min = a;
				b = i;
			}
		}

	cout<<b<<endl;
}
