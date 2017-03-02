#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	float a;
	float s=0;
	int b=0;
	for(int i=0;i<6;i++){
		cin>>a;
		if(a>0){
			b++;
			s+=a;
		}
	}
	cout.precision(1);
	cout<<fixed<<b<<" valores positivos"<<endl;
	cout<<fixed<<s/b<<endl;
	return 0;
}