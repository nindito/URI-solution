#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, d, x, tmp;

	while(cin >> n && n != 0)
	{
        int m [n][n];
        d = 1;
        x = 0;
                     
        for(int i = 0; i < n; ++i){
            for(int j = x; j < n; ++j){
                    m [i][j] = d;
                    d++;
            }
            x++;
            d = 1;
        }
         
        d = 2;
        tmp = n - 2;
        for(int i = n-1; i > 0; i--){
            for(int j = tmp;j >= 0; j--){
                m [i][j] = d;
                d++;
            }
            tmp--;
            d = 2;
        }
         
        for(int i = 0; i < n; i++){
           for(int j = 0; j < n; j++){
              if(j == n - 1){      
                cout << right << setw(3) << setfill(' ') << m[i][j] << " ";;
                cout<<endl;
               
              }else{
               cout << right << setw(3) << setfill(' ') << m [i][j] << " ";;
              }
           }
        }
        cout<<endl;	
    }

	return 0;
}
