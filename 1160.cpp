#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int m=0;m<n;m++){
		long a,b;
		double ia,ib;
		cin>>a>>b>>ia>>ib;
		ia/=100;
		ib/=100;
		int years=8000;
		for(int i=1;i<=100;i++){
			a*=1+ia;
			b*=1+ib;
			if((long)a>(long)b){
				years=i;
				break;
			}
		}
		if(years<8000)
			cout<<years<<" anos."<<endl;
		else
			cout<<"Mais de 1 seculo."<<endl;
	}
	return 0;
}