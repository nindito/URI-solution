#include <iostream>
#include<iomanip>

using namespace std;

int main(){
    int a;
    int sum = 0;
    float t = 0.0;
    
    while(cin >> a){
              if(a < 0) break;
              sum += a;
              t += 1.0;
    }
    
    cout<<fixed<<setprecision(2)<<sum/t<<endl;
    return 0;
}
