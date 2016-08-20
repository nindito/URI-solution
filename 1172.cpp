#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> t;
	
	for(int i = 0; i < 10; ++i)
	{
	    cin >> n;
	    
	    if(n < 1){
	        t.push_back(1);
	    }else{
	        t.push_back(n);
	    }
	            
	}
	
	for(int i = 0; i < 10; ++i)
	{
	    cout << "X[" << i << "] = " << t[i] << endl;
	}
	
	return 0;
}
