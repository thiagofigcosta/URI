#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,l,c;
	while(cin>>n>>l>>c){
		vector<string> book;
		int tmp=0;
		int lines=1;
		for(int i=0;i<n;i++){
			book.push_back("");
			cin>>book[i];
			if(book[i].size()+tmp<=c){
				tmp+=book[i].size()+1;
			}else{
				lines++;
				tmp=book[i].size()+1;
			}
		}
		cout<<((lines+l-1)/l)<<endl;
	}
	return 0;
}