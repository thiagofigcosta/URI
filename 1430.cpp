#include <bits/stdc++.h>
using namespace std;

int main(){
	string in;
	while(cin>>in,in[0]!='*'){
		int start=0;
		int ok=0;
		for(int i=1;i<in.size();i++){
			if(in[i]=='/'||i+1==in.size()){
				string s=in.substr(start+1,i-start-1);
				float f=0;
				for(int j=0;j<s.size();j++){
					char c=s[j];
					if(c=='W')
						f+=1;
					if(c=='H')
						f+=0.5;
					if(c=='Q')
						f+=0.25;
					if(c=='E')
						f+=0.125;
					if(c=='S')
						f+=0.0625;
					if(c=='T')
						f+=0.03125;
					if(c=='X')
						f+=0.015625;
				}
				if(f==1) ok++;
				start=i;
			}
		}
		cout<<ok<<endl;
	}
	return 0;
}