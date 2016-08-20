#include <iostream>

using namespace std;

int main()
{
	int n,x,y,t=0;

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		t=0;
		cin>>x>>y;
		if(x%2==0)
		{ x++;
			for(int j=1;j<=y;j++)
			{
				
				
				t+=x;
				x+=2;
			}
		}
		else
		{
			for(int j=1;j<=y;j++)
			{ 
				t+=x;
				x+=2;
			}
		} cout<<t<<endl;
	
	}

	return 0;
}
