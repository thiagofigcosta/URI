#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	string a,b,c;
	cin>>a>>b>>c;
	cout.precision(2);
	if(a=="vertebrado"){
		if(b=="ave"){
			if(c=="carnivoro"){
				cout<<fixed<<"aguia"<<endl;
			}else{
				cout<<fixed<<"pomba"<<endl;
			}
		}else{
			if(c=="onivoro"){
				cout<<fixed<<"homem"<<endl;
			}else{
				cout<<fixed<<"vaca"<<endl;
			}
		}
	}else{
		if(b=="inseto"){
			if(c=="hematofago"){
				cout<<fixed<<"pulga"<<endl;
			}else{
				cout<<fixed<<"lagarta"<<endl;
			}
		}else{
			if(c=="hematofago"){
				cout<<fixed<<"sanguessuga"<<endl;
			}else{
				cout<<fixed<<"minhoca"<<endl;
			}
		}
	}
	return 0;
}