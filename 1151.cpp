#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int f1=0;
	int f2=1;
	for(int i=0;i<n;i++){
		if(i==0)cout<<"0";
		else if(i==1)cout<<" 1";
		else{
			int sum=f1+f2;
			cout<<" "<<sum;
			f1=f2;
			f2=sum;
		}		
	}cout<<endl;
	return 0;
}