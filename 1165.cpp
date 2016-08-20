#include <iostream>

using namespace std;

int main()
{
	int n,x,y,t=0;

	cin >> n;
	for(y=1;y<=n;y++)
	{
		cin>>x;
		t=0;
		for(int i=2;i<=x/2;i++)
		{
			if(x%i==0)
			{
				t=1;
				break;
			}
		}
			if(t==0){
		cout<<x<<" eh primo"<<endl;
	}
	else{cout<<x<<" nao eh primo"<<endl;
	}
		
	}

	return 0;
}
