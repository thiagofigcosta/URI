#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a;
	cin>>a;
	cout.precision(2);
	int increase=0;
	if(a<=400)
		increase=15;
	else if(a<=800)
		increase=12;
	else if(a<=1200)
		increase=10;
	else if(a<=2000)
		increase=7;
	else	
		increase=4;
	cout<<fixed<<"Novo salario: "<<(float)(100+increase)/100*a<<endl;
	cout<<fixed<<"Reajuste ganho: "<<(float)increase/100*a<<endl;
	cout<<fixed<<"Em percentual: "<<increase<<" %"<<endl;
	
	return 0;
}