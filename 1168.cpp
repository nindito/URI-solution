#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int n,size,i,j;
	string s;
	cin>>n;
	
	for( i=0;i<n;i++)
	{
		cin>>s;
		int res=0;
		size=s.length();
		for (int j = 0; j < size; ++j)
		{
			if(s[j] == '0' || s[j] == '9' || s[j] == '6'){
				res += 6;
			}else if(s[j] == '1'){
				res += 2;
			}else if(s[j] == '2' || s[j] == '3' || s[j] == '5'){
				res += 5;
			}else if(s[j] == '4'){
				res += 4;
			}else if(s[j] == '7'){
				res += 3;
			}else if(s[j]=='8'){
				res += 7;
			}
		}
		cout << res << " leds" << endl;
	}
}
