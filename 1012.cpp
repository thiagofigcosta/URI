#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b,c;
	cin>>a>>b>>c;
	cout.precision(3);
	cout<<fixed<<"TRIANGULO: "<<a*c/2<<endl;
	cout<<fixed<<"CIRCULO: "<<c*c*3.14159<<endl;
	cout<<fixed<<"TRAPEZIO: "<<(a+b)*c/2<<endl;
	cout<<fixed<<"QUADRADO: "<<b*b<<endl;
	cout<<fixed<<"RETANGULO: "<<a*b<<endl;
	return 0;
}