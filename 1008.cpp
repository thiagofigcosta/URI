#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int number;
	int hours;
	float value;
	cin>>number>>hours>>value;
	cout.precision(2);
	cout<<fixed<<"NUMBER = "<<number<<"\nSALARY = U$ "<<value*hours<<endl;
	return 0;
}