#include <iostream>
#include <math.h>

using namespace std;

int main(){
	char number[50];
	float salary;
	float bonus;
	cin>>number>>salary>>bonus;
	cout.precision(2);
	cout<<fixed<<"TOTAL = R$ "<<salary+(0.15*bonus)<<endl;
	return 0;
}