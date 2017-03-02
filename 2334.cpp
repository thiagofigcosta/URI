#include <iostream>
#include <string>

using namespace std;

string subtract(string s,int pos){
	if(pos<0||pos>=s.size())
		return s;
	s[pos]=s[pos]-1;
	if(s[pos]=='/'){
		if(s.size()>1){
			s[pos]='9';
			s=subtract(s,pos-1);
		}else{
			s[pos]='0';
		}
	}
	while(s[0]=='0'&&s.size()>1)
		s=s.substr(1);
	return s;
}

int main(){
	string in;
	do{
		cin>>in;
		if(in[0]=='-')
			break;
		in=subtract(in,in.size()-1);
		cout<<in<<endl;
	}while(true);
	
	return 0;
}