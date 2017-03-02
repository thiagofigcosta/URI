#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	cout.precision(1);
	for(int i=1;i<=a;i++){
		if(i%2==0)
			cout<<fixed<<i<<"^2 = "<<(long)pow(i,2)<<endl;

	}
	return 0;
}