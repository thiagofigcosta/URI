#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long a;
	cin>>a;
	cout.precision(3);
	int h=0,m=0;
	if(a>=365){
		h=a/365;
		a=a%365;
	}
	if(a>=30){
		m=a/30;
		a=a%30;
	}
	cout<<h<<" ano(s)"<<endl;
	cout<<m<<" mes(es)"<<endl;
	cout<<a<<" dia(s)"<<endl;
	return 0;
}