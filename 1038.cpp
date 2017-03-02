#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	cout.precision(2);
	if(x==1)
		cout<<fixed<<"Total: R$ "<<(float)(y*4)<<endl;
	else if(x==2)
		cout<<fixed<<"Total: R$ "<<(float)(y*4.5)<<endl;
	else if(x==3)
		cout<<fixed<<"Total: R$ "<<(float)(y*5)<<endl;
	else if(x==4)
		cout<<fixed<<"Total: R$ "<<(float)(y*2)<<endl;
	else if(x==5)
		cout<<fixed<<"Total: R$ "<<(float)(y*1.5)<<endl;
	return 0;
}