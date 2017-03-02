#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long a;
	cin>>a;
	cout.precision(3);
	int h=0,m=0;
	if(a>3600){
		h=a/3600;
		a=a%3600;
	}
	if(a>60){
		m=a/60;
		a=a%60;
	}
	cout<<h<<":"<<m<<":"<<a<<endl;
	return 0;
}