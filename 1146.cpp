#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    while(n!=0)
    {
    	for(int i=1;i<=n;i++)
    	{
    		cout<<i;
    		if(i!=n)cout<<" ";
		}
		cout<<endl;
		cin>>n;
		if(n==0) break;
	}
    
    
    return 0;
}
