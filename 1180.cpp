#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,x;
	vector<int>v;
	int position = 0, value = 0, temp = 0,i;
	int flag = 0;
	cin>>n;
	for( i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
		
	}
	
	for(i=0;i<n;i++)
	{
		temp = v[i];
		if(flag == 0){
			value = temp;
			flag = 1;
		}
		if(temp < value){
			value = temp;
			position = i;
		}
	}
	
	cout << "Menor valor: " << value << endl ;
	cout<< "Posicao: " << position << endl;
	
	return 0;
}
