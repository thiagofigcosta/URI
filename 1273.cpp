#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	bool f=false;
	while(cin>>n,n){
		if(f)cout<<endl;
		f=true;
		vector<string> strs;
		int longest=0;
		for(int i=0;i<n;i++){
			strs.push_back("");
			cin>>strs[i];
			if(strs[i].size()>longest)
				longest=strs[i].size();
		}
		for(int i=0;i<n;i++){
			for(int k=strs[i].size();k<longest;k++)
				cout<<" ";
			cout<<strs[i]<<endl;
		}	
	}
	return 0;
}