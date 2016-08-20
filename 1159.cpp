#include <iostream>

using namespace std;

int main()
{
	int n, s = 0;

	cin >> n;

	while(n != 0)
	{
		s = 0;

		if(n % 2 == 0){
			for (int i = 0; i < 5; ++i)
			{
				s += n;
				n += 2;
			}
		}else{
			n++;
			for (int i = 0; i < 5; ++i)
			{
				s += n;
				n += 2;
			}

		}

		cout << s << endl;

		cin >> n;
	}

	return 0;
}
