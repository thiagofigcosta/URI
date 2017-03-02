#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	for(int c=0;c<n;c++){
		cin>>m;
		int alt[m];
		for(int i=0;i<m;i++){
			scanf("%d",&alt[i]);
		}
		sort(alt,alt+m);
		printf("%d",alt[0]);
		for(int i=1;i<m;i++)
			printf(" %d",alt[i]);
		cout<<endl;
	}
	return 0;
}