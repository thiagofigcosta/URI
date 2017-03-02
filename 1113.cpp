#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b,a!=b)
		if(a<b)
			cout<<"Crescente"<<endl;
		else
			cout<<"Decrescente"<<endl;

	return 0;
}