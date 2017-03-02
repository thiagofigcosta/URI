#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a;
	cin>>a;
	cout.precision(2);
	int _100=0,_50=0,_20=0,_10=0,_5=0,_2=0;
	int _dot1=0,_dot50=0,_dot25=0,_dot10=0,_dot05=0;
	if(a>=100){
		_100=(int)a/100;
		a=fmodf(a,100);
	}
	if(a>=50){
		_50=(int)a/50;
		a=fmodf(a,50);
	}
	if(a>=20){
		_20=(int)a/20;
		a=fmodf(a,20);
	}
	if(a>=10){
		_10=(int)a/10;
		a=fmodf(a,10);
	}
	if(a>=5){
		_5=(int)a/5;
		a=fmodf(a,5);
	}
	if(a>=2){
		_2=(int)a/2;
		a=fmodf(a,2);
	}
	cout<<"NOTAS:"<<endl;
	cout<<_100<<" nota(s) de R$ 100.00"<<endl;
	cout<<_50 <<" nota(s) de R$ 50.00"<<endl;
	cout<<_20 <<" nota(s) de R$ 20.00"<<endl;
	cout<<_10 <<" nota(s) de R$ 10.00"<<endl;
	cout<<_5  <<" nota(s) de R$ 5.00"<<endl;
	cout<<_2  <<" nota(s) de R$ 2.00"<<endl;
	if(a>=1){
		_dot1=a/1;
		a=fmodf(a,1);
	}
	if(a>=0.5){
		_dot50=a/0.5;
		a=fmodf(a,0.5);
	}
	if(a>=0.25){
		_dot25=a/0.25;
		a=fmodf(a,0.25);
	}
	if(a>=0.10){
		_dot10=a/0.10;
		a=fmodf(a,0.10);
	}
	if(a>=0.05){
		_dot05=a/0.05;
		a=fmodf(a,0.05);
	}
	cout<<"MOEDAS:"<<endl;
	cout<<_dot1 <<" moeda(s) de R$ 1.00"<<endl;
	cout<<_dot50<<" moeda(s) de R$ 0.50"<<endl;
	cout<<_dot25<<" moeda(s) de R$ 0.25"<<endl;
	cout<<_dot10<<" moeda(s) de R$ 0.10"<<endl;
	cout<<_dot05<<" moeda(s) de R$ 0.05"<<endl;
	cout<<a*100 <<" moeda(s) de R$ 0.01"<<endl;	
	return 0;
}