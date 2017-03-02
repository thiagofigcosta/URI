#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string in;
		int diamonds=0;
		cin>>in;
		stack<bool> ez;
		for(int s=0;s<in.size();s++){
			if(in[s]=='<')
				ez.push(true);
			else if(in[s]=='>'&&ez.size()>0){
				ez.pop();
				diamonds++;
			}
		}
		cout<<diamonds<<endl;
	}
}