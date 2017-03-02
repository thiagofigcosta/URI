#include <iostream>

using namespace std;

int main(){
	double a,b;
	cin>>a>>b;
	cout.precision(5);
	cout<<fixed<<"MEDIA = "<<(a*3.5+b*7.5)/(3.5+7.5)<<endl;
	return 0;
}