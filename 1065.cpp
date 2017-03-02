#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a;
	int b=0;
	for(int i=0;i<5;i++){
		cin>>a;
		if(a%2==0){
			b++;
		}
	}
	cout.precision(1);
	cout<<fixed<<b<<" valores pares"<<endl;
	return 0;
}