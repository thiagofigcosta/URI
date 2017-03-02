#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int I=1,J=60;
	cout.precision(2);
	while(J>=0){
		cout<<fixed<<"I="<<I<<" J="<<J<<endl;
		I+=3;J-=5;
	}
	return 0;
}