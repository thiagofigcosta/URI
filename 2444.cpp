#include <iostream>

using namespace std;

int main(){
	int vol,n,tmp;
	cin>>vol>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		vol+=tmp;
		if(vol>100)vol=100;
		if(vol<0)vol=0;
	}
	cout<<vol<<endl;
	return 0;
}