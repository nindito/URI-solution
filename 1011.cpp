#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int R;
   double V;
   cin>>R;
    V = ((4.0 / 3) *3.14159 * R * R * R);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<V<<endl;
    return 0;
}
