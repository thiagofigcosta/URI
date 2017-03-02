#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a,b;
	cin>>a;
	cout.precision(1);
	for(int i=1;i<=10000;i++){
		if(i%a==2)
			cout<<fixed<<i<<endl;

	}
	return 0;
}