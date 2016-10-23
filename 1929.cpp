#include <iostream>
#include<algorithm>
#include<vector>
 
 

using namespace std;

int main() {
  vector<int> a(4);
  cin>>a[0]>>a[1]>>a[2]>>a[3];
  sort(a.rbegin(), a.rend());
  if ((a[0] < a[1] + a[2]) || (a[1] < a[2] + a[3]))
    cout << "S" << endl;
  else
    cout << "N" << endl;
  return 0;
}
