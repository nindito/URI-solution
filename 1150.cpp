#include <iostream>

using namespace std;

int main()
{
	int x, z;
	int sum = 0, tmp = 0;

	cin >> x >> z;

	while(z <= x)
	{
		cin >> z;
	}
	
	while(tmp <= z)
	{
		tmp += x;
		x++;
		sum++; 
	}
	cout << sum << endl;

	return 0;
}
