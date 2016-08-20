#include <iostream>
#include<iomanip>


using namespace std;

int main()
{
	int l;
	char t;
	double av=0.0;
	 double m[12][12];
	
	cin>>l>>t;
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			cin>>m[i][j];
			if(i==l)
			{
				av+=m[i][j];
			}
		}
	}
	
	if(t=='S'){
		cout<<fixed<<setprecision(1)<<av<<endl;
	}
	else{
		cout<<fixed<<setprecision(1)<<av/12.0<<endl;
	}
	
	return 0;
}
