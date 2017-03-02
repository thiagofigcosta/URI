#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();
	for(int c=0;c<n;c++){
		string s;
		getline(cin,s);
		for(int i=s.size()/2-1;i>=0;i--)
			cout<<s[i];
		for(int i=s.size()-1;i>=s.size()/2;i--)
			cout<<s[i];
		cout<<endl;
	}
	return 0;
}