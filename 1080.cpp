#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a,max=0,pos;
	cout.precision(1);
	for(int i=1;i<=100;i++){
		cin>>a;
		if(a>max){
			max=a;
			pos=i;
		}
	}
	cout<<fixed<<max<<endl;
	cout<<fixed<<pos<<endl;
	return 0;
}