#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>c>>b>>d;
	cout.precision(1);
	int s=a*60+c;
	int e=b*60+d;
	int t=0;
	if(a<=b)
		t=e-s;
	else
		t=1440-s+e;
	if(t!=0)
		cout<<fixed<<"O JOGO DUROU "<<(t-t%60)/60<<" HORA(S) E "<<t%60<<" MINUTO(S)"<<endl;
	else
		cout<<fixed<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
	return 0;
}