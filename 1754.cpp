#include <bits/stdc++.h>

using namespace std;

unsigned long long cceil(unsigned long long a, unsigned long long b){
	unsigned long long ab=a/b;
	if(a%b==0) return ab==1?ab+1:ab;
	else 	   return ab==0?ab+2:ab+1;

}

int main(){
	unsigned long long cases,a,b;
	cin>>cases;
	for(int x=0;x<cases;x++){
		cin>>a>>b;
		cout<<cceil(a,b)<<endl;
	}
	return 0;
}
