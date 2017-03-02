#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b,s=0;
		cin>>a>>b;
		int max=a;
		int min=b;
		if(b>a){
			max=b;
			min=a;
		}
		for(int t=min+1;t<max;t++)
			if(t%2!=0)
			s+=t;
		cout<<s<<endl;

	}
	return 0;
}	