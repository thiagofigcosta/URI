#include <bits/stdc++.h>
using namespace std;

bool is0(string s){
	for(int i=0;i<s.size();i++)
		if(s[i]!='0')
			return false;
	return true;
}

string rmZero(string s){
	int idx=-1;
	for(int i=0;i<s.size();i++)
		if(s[i]!='0'){
			idx=i;
			break;
		}
	if(idx>=0){
		return s.substr(idx);
	}else{
		return "0";
	}
}

int main(){
	int n;
	string s;
	while(cin>>n>>s,n&&!is0(s)){
		s.erase(remove(s.begin(),s.end(),(char)(n+48)),s.end());
		cout<<rmZero(s)<<endl;
	}
	return 0;
}