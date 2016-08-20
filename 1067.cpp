#include <iostream>  
using namespace std;  
int main() 
{ 
    int X;
    cin>>X;
    cout<<1<<endl;
    for(int i=1;i<X-1;i+=2)
    {
    	 int oddNumber = i + 2;
    	 cout<<oddNumber<<endl;
	}

 return 0; 
}
