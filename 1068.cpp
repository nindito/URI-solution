#include<iostream>
#include<algorithm>
#include<cstring>
#include<stack>

using namespace std;
int main()
{
	string a;
	int s;
	while(getline(cin,a))
	{
		stack<char> v;
		s=a.size();
		for(int i=0;i<s;i++)
		{
		if(a[i] == '(') v.push(i);
			if(a[i] == ')')
			{
				if(!v.empty()){
					v.pop();
				}
				else{
					v.push(i);
				}
			}
		}
		if(v.empty()){
			cout << "correct" << endl;
		}else{
			cout << "incorrect" << endl;
		}
	}
	return 0;
}
