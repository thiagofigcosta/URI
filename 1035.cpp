#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout.precision(2);
	if(b>c&&d>a&&c+d>a+b&&c>0&&d>0&a%2==0)
		cout<<fixed<<"Valores aceitos"<<endl;
	else 
		cout<<fixed<<"Valores nao aceitos"<<endl;
	return 0;
}