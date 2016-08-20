#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

 int main()
 {
 	double x;
 	vector<double>v;
 	cin>>x;
 	for(int i=0;i<100;i++)
 	{
 		v.push_back(x);
 		x/=2;
	 }
	 
	 for(int i=0;i<100;i++)
	 {
	 	cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<v[i]<<endl;
	 }
	 return 0;
 }
