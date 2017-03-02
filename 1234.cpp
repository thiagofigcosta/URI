#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		bool upper=false;
		for(int i=0;i<s.size();i++){
			if(isalpha(s[i])){
				if(!upper){
					s[i]=toupper(s[i]);
					upper=true;
				}else{
					s[i]=tolower(s[i]);
					upper=false;
				}
			}
		}
		cout<<s<<endl;
	}
	return 0;
}