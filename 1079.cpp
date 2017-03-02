#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	float a,b,c,d;
	cin>>a;
	cout.precision(1);
	for(int i=1;i<=a;i++){
		cin>>b>>c>>d;
		cout<<fixed<<(b*2+c*3+d*5)/10<<endl;
	}
	return 0;
}