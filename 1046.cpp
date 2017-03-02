#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	cout.precision(1);
	if(b<=24)
		cout<<fixed<<"O JOGO DUROU "<<b-a<<" HORA(S)"<<endl;
	else
		cout<<fixed<<"O JOGO DUROU "<<24-a+b<<" HORA(S)"<<endl;
	
	return 0;
}