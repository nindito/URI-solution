#include <iostream>
#include<cmath>
using namespace std;
int main()
{
		int a,b,c,in=0,gr=0,emp=0,ctr=0;

	
	do{
			
	cin>>a>>b;
	ctr++;
	
	
	
		if(a>b) in++;
		else if(a==b)emp++;
		else gr++;
		
		cout << "Novo grenal (1-sim 2-nao)" << endl;
			cin>>c;
	 
	
	}
	

	while(c==1);

	
	cout << ctr << " grenais" << endl;
	cout << "Inter:" << in << endl;
	cout << "Gremio:" << gr << endl;
	cout << "Empates:" << emp << endl;
	
	if(in > gr){
		cout << "Inter venceu mais" << endl;
	}else{
		cout << "Gremio venceu mais" << endl;
	}
	return 0;
}
