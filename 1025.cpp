#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main(){
int n,q,r = 0,A[100001],n1,q1;

while(cin>>n>>q){
 if(n == 0 && q == 0){
  break;
 }

vector < int > V;
vector < int > :: iterator it;
for(int i = 1; i <= n ; i++){
 cin>>n1;
 V.push_back(n1);
}
sort(V.begin(),V.end());

for(int i = 1 ; i <= q; i++){
 cin>>A[i];
}
 
 r++;
cout<<"CASE# "<<r<<":\n";
 
for(int i = 1 ; i <= q ; i++){
it = find(V.begin(),V.end(),A[i]);
if(it == V.end()){
 cout<<A[i]<<" not found"<<endl;
 }
 else
   cout<<A[i]<<" found at "<<distance(V.begin(),it)+1<<endl;
   }
}
return 0 ;
}
