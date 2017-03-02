#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a,b;
	cin>>a;
	cout.precision(1);
	for(int i=1;i<=10;i++){
		cout<<fixed<<i<<" x "<<a<<" = "<<i*a<<endl;
	}
	return 0;
}