#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a;
	int par=0;
	int positivo=0;
	int zero=0;
	for(int i=0;i<5;i++){
		cin>>a;
		if(a%2==0){
			par++;
		}
		if(a==0)
			zero++;
		else
		if(a>0){
			positivo++;
		}
	}
	cout.precision(1);
	cout<<fixed<<par<<" valor(es) par(es)"<<endl;
	cout<<fixed<<5-par<<" valor(es) impar(es)"<<endl;
	cout<<fixed<<positivo<<" valor(es) positivo(s)"<<endl;
	cout<<fixed<<5-positivo-zero<<" valor(es) negativo(s)"<<endl;
	return 0;
}