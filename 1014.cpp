#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a;
	float b;
	cin>>a>>b;
	cout.precision(3);
	cout<<fixed<<a/b<<" km/l"<<endl;
	return 0;
}