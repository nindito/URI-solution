#include <iostream>

using namespace std;

int main()
{
    int x, y, z = 1;
    
    cin >> x >> y;
    
    while(z <= y)
    {
        for(int i = 0; i < x; ++i)
        {
            cout << z;
            if(i != x - 1){
                cout << " ";
            }
            z++;
        }
        cout << endl;
    }
    
    return 0;
}
