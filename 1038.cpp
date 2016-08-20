#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double X,Y;
	cin>>X>>Y;
	if(X==1)
	{
		cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*4<<endl;
	}
	
	 if(X==2)
	{
		cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*4.5<<endl;
	}
	
	 if(X==3)
	 {
	 	cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*5<<endl;
	 }
	 
	 if(X==4)
	 {
	 	cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*2<<endl;
	 	
	 }
	 
	 if(X==5)
	 {
	 	cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*1.5<<endl;
	 }
	return 0;
}
