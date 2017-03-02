#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int c=0;c<n;c++){
		string a,b;
		cin>>a>>b;
		int bigger=a.size();
		if(b.size()>bigger)
			bigger=b.size();
		for(int i=0;i<bigger;i++){
			if(i<a.size())
				cout<<a[i];
			if(i<b.size())
				cout<<b[i];
		}
		cout<<endl;
	}
	return 0;
}