#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n;
	vector<int> a;

	cin >> n;

	for (int i = 0; i < 10; ++i)
	{
		a.push_back(n);
		n +=n;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << "N[" << i << "] = " << a[i] << endl;
	}

	return 0;
}
