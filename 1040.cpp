#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	cout.precision(1);
	float media=2*a+3*b+4*c+d;
	media/=10;
	cout<<fixed<<"Media: "<<media<<endl;
	if(media>=7)
		cout<<fixed<<"Aluno aprovado."<<endl;
	else if(media<5)
		cout<<fixed<<"Aluno reprovado."<<endl;
	else{
		cout<<fixed<<"Aluno em exame."<<endl;
		float exam;
		cin>>exam;
		cout<<fixed<<"Nota do exame: "<<exam<<endl;
		float media2=(media+exam)/2;
		if(media2>=5)
			cout<<fixed<<"Aluno aprovado."<<endl;
		else
			cout<<fixed<<"Aluno reprovado."<<endl;
		cout<<fixed<<"Media final: "<<media2<<endl;

	}
	return 0;
}