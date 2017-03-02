#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout.precision(3);
	int maiorab=(a+b+abs(a-b))/2;
	cout<<fixed<<(maiorab+c+abs(maiorab-c))/2<<" eh o maior"<<endl;
	return 0;
}