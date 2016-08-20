#include <iostream>
#include<iomanip>


using namespace std;

int main()
{

	char t;
	double av=0.0;
	 double m[12][12];
	
	cin>>t;
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			cin>>m[i][j];
			if(j>i)
			{
				av+=m[i][j];
			}
		}
	}
	
	if(t=='S'){
		cout<<fixed<<setprecision(1)<<av<<endl;
	}
	else{
		cout<<fixed<<setprecision(1)<<av/66.0<<endl;
	}
	
	return 0;
}
