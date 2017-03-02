#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	float a;
	int b=0;
	for(int i=0;i<6;i++){
		cin>>a;
		if(a>0)
			b++;
	}
	cout<<fixed<<b<<" valores positivos"<<endl;
	return 0;
}