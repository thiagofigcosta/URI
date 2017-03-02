#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c;
	cout.precision(1);
	int A=a,B=b,C=c;
	
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
	
	cout<<fixed<<a<<endl;
	cout<<fixed<<b<<endl;
	cout<<fixed<<c<<endl;
	cout<<fixed<<endl<<A<<endl;
	cout<<fixed<<B<<endl;
	cout<<fixed<<C<<endl;
	

	return 0;
}