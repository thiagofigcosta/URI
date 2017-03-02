#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a,b;
	cin>>a;
	cout.precision(1);
	for(int i=1;i<=a;i++){
		cin>>b;
		if(b!=0){
		if(b%2==0)
			cout<<fixed<<"EVEN ";
		else
			cout<<fixed<<"ODD ";
		}
		if(b>0)
			cout<<fixed<<"POSITIVE"<<endl;
		else if(b<0)
			cout<<fixed<<"NEGATIVE"<<endl;
		else
			cout<<fixed<<"NULL"<<endl;

	}
	return 0;
}