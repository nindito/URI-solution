#include <iostream>

using namespace std;

int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int c=0;
		cin>>n;
		for(int j=1;j<n;j++)
		{
			if(n%j==0) c+=j;
		}
		
		if(c == n){
			cout << n << " eh perfeito" << endl;
		}else{
			cout << n << " nao eh perfeito" << endl;
		}
		
		
	}

	return 0;
}
