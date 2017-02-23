#include <iostream>
 
 
using namespace std;
 
int fun(int n, int k) {
    int r = 0,i;
    for (  i = 2; i <= n; i++)
        r = (r + k) % i;

    return r;
}

int main(){
    int n, x, y, j, num, pulo,i;
    
   cin>>n;
    
    for(  i = 1; i <=n; i++){
           cin>>x>>y;
            
           cout<<"Case "<<i<<": "<<fun(x,y)+1<<endl;
    }
    return 0;
}
