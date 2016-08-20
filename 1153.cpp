#include <iostream>

using namespace std;

int main()
{
	int n, fac = 1;

	cin >> n;
	while(n != 1)
	{
		fac *= n;
		n--;
	}

	cout << fac << endl;

	return 0;
}
