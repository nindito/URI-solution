#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void s(vector<int> &v)
{
    for(int i = 0, j = 19; i < 10; ++i, --j)
    {
        swap(v[i],v[j]);
    }
}


int main()
{
    int n;
    vector<int> v;
    
    for(int i = 0; i < 20; ++i)
    {
        cin >> n;
        v.push_back(n);
    }
    
    s(v);
   for(int i = 0; i < 20; ++i)
    {
        cout << "N[" << i << "] = " << v[i] << endl;
    }
    
    return 0;
}
