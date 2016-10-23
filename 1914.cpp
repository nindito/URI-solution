#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    
    long long int x,y,T ;
    char a[201], b[10], c[201], d[10];
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y;
        
        if( (x+y)%2==0)
        {
            if(b[10]=='PAR') cout<<a<<endl;
            else  cout<<c<<endl;
        }
        else
        {
            if(b[10]=='PAR') cout<<c<<endl;
            else cout<<a<<endl;
        }
    }
    return 0;
}
