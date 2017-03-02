#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double a;
	cin>>a;
	cout.precision(5);
	if(a>=0&&a<=25)
		cout<<fixed<<"Intervalo [0,25]"<<endl;
	else if(a>25&&a<=50)
		cout<<fixed<<"Intervalo (25,50]"<<endl;
	else if(a>50&&a<=75)
		cout<<fixed<<"Intervalo (50,75]"<<endl;
	else if(a>75&&a<=100)
		cout<<fixed<<"Intervalo (75,100]"<<endl;
	else
		cout<<fixed<<"Fora de intervalo"<<endl;
	return 0;
}