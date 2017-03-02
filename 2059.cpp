#include <bits/stdc++.h>

using namespace std;

int main(){
	int p,j1,j2,r,a;
	cin>>p>>j1>>j2>>r>>a;
	if((!((j1+j2)%2==p)||r&&!a)&&!(r&&a))
		cout<<"Jogador 1 ganha!\n";
	else
		cout<<"Jogador 2 ganha!\n";
	return 0;
}