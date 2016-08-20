#include <iostream>  
using namespace std;  
int main() 
{ 
    int N, j;
    cin>>N;
    for (int i = 1; i <= N; i++) {
            cin>>j;
            if (j == 0) {
                
                cout<<"NULL"<<endl;
                
            }
             if(j % 2 != 0 && j > 0){
                cout<<"ODD POSITIVE\n";
            }
             if(j % 2 == 0 && j  > 0){
                cout<<"EVEN POSITIVE\n";
            }
            if(j % 2 != 0 && j < 0){
            	cout<<"ODD NEGATIVE"<<endl;
			}
			 if(j % 2 == 0 && j  < 0){
				cout<<"EVEN NEGATIVE\n";
			}
        }
 return 0; 
}
