#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    
    cin>>a>>b>>c;

    if (a>b && b>c) {
    cout<<c<<endl<<b<<endl<<a<<endl;
    }
    else if (a>c && c>b)
    cout<<b<<endl<<c<<endl<<a<<endl;
    else if (b>a && a>c)
    cout<<c<<endl<<a<<endl<<b<<endl;
    else if (b>c && c>a)
    cout<<a<<endl<<c<<endl<<b<<endl;
    else if (c>a && a>b)
    cout<<b<<endl<<a<<endl<<c<<endl;
    else cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<"\n";
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    
   return 0;
}
