#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	cout.precision(5);
	double delta=(b*b)-(4*a*c);
	
	
	if(delta<0||a==0)
		cout<<fixed<<"Impossivel calcular"<<endl;
	else{
		cout<<fixed<<"R1 = "<<(-b+sqrt(delta))/(2*a)<<endl;
		cout<<fixed<<"R2 = "<<(-b-sqrt(delta))/(2*a)<<endl;
	}
	return 0;
}