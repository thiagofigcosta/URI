#include <bits/stdc++.h>

using namespace std;

int main(){
	int s;
	string tree="*";
	while(cin>>s){
		bool even=false;
		if(s%2==0){
			even=true;
			s--;
		}
		int s2=s/2+1;
		for(int i=0;i<s2;i++){
			if(even)cout<<" ";
			for(int j=i;j<s/2;j++)
				cout<<" ";
			for(int j=0;j<=i*2;j++)
				cout<<tree;
			cout<<endl;
		}
		if(even)cout<<" ";
		for(int j=0;j<s/2;j++)
				cout<<" ";
		cout<<tree<<endl;
		if(even)cout<<" ";
		for(int j=1;j<s/2;j++)
			cout<<" ";
		cout<<tree<<tree<<tree<<endl<<endl;

	}
	return 0;
}