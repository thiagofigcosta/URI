#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a,b;
	int in=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b>=10&&b<=20)
			in++;
	}
	cout.precision(1);
	cout<<fixed<<in<<" in"<<endl;
	cout<<fixed<<a-in<<" out"<<endl;
	return 0;
}