#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	for(int c=1;c<=n;c++){
		int size;cin>>size;
		int *walk=new int[size];
		bool *range=new bool[size];
		int cams;cin>>cams;
		for(;cams>0;cams--){
			int s,e;cin>>s>>e;
			for(s--,e--;s<=e;s++)
				range[s]=true;
		}
		int stars;cin>>stars;
		for(;stars>0;stars--){
			int pos;
			cin>>pos;
			walk[pos-1]++;
		}
		int out=0;
		for(int i=0;i<size;i++){
			if(walk[i]&&range[i])
				out+=walk[i];
		}
		cout<<"Caso #"<<c<<": "<<out<<endl;
	}
	return 0;
}