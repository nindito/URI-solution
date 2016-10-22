#include<iostream>
#include<cmath>


using namespace std;

int main(){
    int n;
    while(cin >> n){
        int c = n/2 ;
        int b = n/3;
        int a = n - b;
        for(int i=0; i < n; i++){
            for(int j=0; j < n; j++){
                if(c == j && c == i){
                    cout << "4";
                }else if(( i >= b && i < a) && (j >= b && j < a)){
                    cout << "1";
                }else if(i == j){
                    cout << "2";
                }else if( j == n - 1 - i){
                    cout << "3";
                }else if(i < b || i >= a || j < b || j >= a){
                    cout << "0";
                }
            }
            cout << endl;    
        }
        cout << endl;
    }
}
