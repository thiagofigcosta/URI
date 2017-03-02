#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double a,b,c,d;
	cin>>a>>b>>c;
	if(a<b){
		d=b;
		b=a;
		a=d;
	}
	if(c<a){
		d=a;
		a=c;
		c=d;
	}
	if(b<a){
		d=a;
		a=b;
		b=d;
	}

	cout.precision(1);
	if(!(a+b>c&&a+c>b&&b+c>a))
		cout<<fixed<<"NAO FORMA TRIANGULO"<<endl;
	else{
		
		
		
		 
		
		if(c==sqrt(b*b+a*a))
			cout<<fixed<<"TRIANGULO RETANGULO"<<endl;
		if(c>sqrt(b*b+a*a))
			cout<<fixed<<"TRIANGULO OBTUSANGULO"<<endl;
		if(c<sqrt(b*b+a*a))
			cout<<fixed<<"TRIANGULO ACUTANGULO"<<endl;
if(a==b&&b==c)
			cout<<fixed<<"TRIANGULO EQUILATERO"<<endl;
		else
			if(a==b||a==c||b==c)
			cout<<fixed<<"TRIANGULO ISOSCELES"<<endl;
		
	}	
	return 0;
}