#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
	  double d;
    vector <double> v;

    for (int i = 0; i < 100; ++i)
    {
        cin>>d;
        v.push_back(d);
    }

    for (int i = 0; i < 100; ++i)
    {
        if(v[i] <= 10)
            cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<v[i]<<endl;
    }

	
	return 0;
}
