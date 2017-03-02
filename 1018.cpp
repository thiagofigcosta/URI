#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long a;
	cin>>a;
	cout.precision(3);
	long _100=0,_50=0,_20=0,_10=0,_5=0,_2=0,_1=0;
	long bkb=a;
	if(a>=100){
		_100=(long)a/100;
		a=a%100;
	}
	if(a>=50){
		_50=(long)a/50;
		a=a%50;
	}
	if(a>=20){
		_20=(long)a/20;
		a=a%20;
	}
	if(a>=10){
		_10=(long)a/10;
		a=a%10;
	}
	if(a>=5){
		_5=(long)a/5;
		a=a%5;
	}
	if(a>=2){
		_2=(long)a/2;
		a=a%2;
	}
	cout<<bkb<<endl;
	cout<<_100<<" nota(s) de R$ 100,00"<<endl;
	cout<<_50 <<" nota(s) de R$ 50,00"<<endl;
	cout<<_20 <<" nota(s) de R$ 20,00"<<endl;
	cout<<_10 <<" nota(s) de R$ 10,00"<<endl;
	cout<<_5  <<" nota(s) de R$ 5,00"<<endl;
	cout<<_2  <<" nota(s) de R$ 2,00"<<endl;
	cout<<a   <<" nota(s) de R$ 1,00"<<endl;
	return 0;
}