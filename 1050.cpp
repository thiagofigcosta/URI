#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	cout.precision(2);
	switch(a){
		default: cout<<fixed<<"DDD nao cadastrado"<<endl; break;
		case 31: cout<<fixed<<"Belo Horizonte"<<endl; break;
		case 61: cout<<fixed<<"Brasilia"<<endl; break;
		case 71: cout<<fixed<<"Salvador"<<endl; break;
		case 11: cout<<fixed<<"Sao Paulo"<<endl; break;
		case 21: cout<<fixed<<"Rio de Janeiro"<<endl; break;
		case 32: cout<<fixed<<"Juiz de Fora"<<endl; break;
		case 19: cout<<fixed<<"Campinas"<<endl; break;
		case 27: cout<<fixed<<"Vitoria"<<endl; break;
	}			
	return 0;
}