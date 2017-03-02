#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		vector<string> tels;
		cin.ignore();
		for(int i=0;i<n;i++){
			tels.push_back("");
			getline(cin,tels[i]);
		}
		sort(tels.begin(), tels.end());
		int count=0;
		for(int i=1;i<n;i++){
			if(tels[i][0]==tels[i-1][0])
			for(int j=0;j<tels[i].size();j++){
				if(tels[i][j]==tels[i-1][j])
					count++;
				else break;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}