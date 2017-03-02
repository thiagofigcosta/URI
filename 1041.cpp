#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b;
	cin>>a>>b;
	cout.precision(1);
	if(a==0&&b==0)
		cout<<fixed<<"Origem"<<endl;
	else if(a==0)
		cout << "Eixo Y"<<endl;
	else if(b==0)
		cout << "Eixo X"<<endl;
	else if(a>0){
		if(b>0){
			cout<<fixed<<"Q1"<<endl;
		}else{
			cout<<fixed<<"Q4"<<endl;
		}
	}else{
		if(b>0){
			cout<<fixed<<"Q2"<<endl;
		}else{
			cout<<fixed<<"Q3"<<endl;
		}
	}

	return 0;
}