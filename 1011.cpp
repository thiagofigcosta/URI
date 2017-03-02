#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define PI 3.14159
using namespace std;

int main(){
	int n1, n2,n3;
	double n99;
	scanf("%d",&n1);
	//(4/3) * pi * R3
	n99=(double)4/3*PI*n1*n1*n1;
	cout<<"VOLUME = "; printf("%.3f\n",n99);

	return 0;
}