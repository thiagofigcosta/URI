#include <iostream>

using namespace std;

int main(){
	do{
		int a,b;
		cin>>a>>b;
		if(a<=0||b<=0) break;
		int max=a;
		int min=b;
		if(b>a){
			max=b;
			min=a;
		}
		int s=0;
		for(int i=min;i<=max;i++){
			cout<<i<<" ";
			s+=i;
		}
		cout<<"Sum="<<s<<endl;
	}while(true);
	return 0;
}