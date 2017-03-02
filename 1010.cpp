#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define PI 3.14159
using namespace std;

int main(){
	int n1, n2,n3,n4;
	float n99,n98,nsoma;
	scanf("%d %d %f %d %d %f",&n1,&n2,&n99,&n3,&n4,&n98);
	cout<<"VALOR A PAGAR: R$ ";
	nsoma=n2*n99+n4*n98;
	printf("%.2f\n",nsoma);
	

	return 0;
}
