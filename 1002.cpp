#include <iostream>

using namespace std;

int main(){
	double pi=3.14159;
	double a;
	cin>>a;
	cout.precision(4);
	cout<<fixed<<"A="<<(double)a*a*pi<<endl;
	return 0;
}