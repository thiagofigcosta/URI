#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	cout.precision(1);
	if(a>b)
		if(a%b==0)
			cout<<fixed<<"Sao Multiplos"<<endl;
		else
			cout<<fixed<<"Nao sao Multiplos"<<endl;
	else
		if(b%a==0)
			cout<<fixed<<"Sao Multiplos"<<endl;
		else
			cout<<fixed<<"Nao sao Multiplos"<<endl;
	return 0;
}