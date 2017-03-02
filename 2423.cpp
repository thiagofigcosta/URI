#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	a/=2;
	b/=3;
	c/=5;
	if(b<a)
		a=b;
	if(c<a)
		a=c;
	cout<<a<<endl;
}