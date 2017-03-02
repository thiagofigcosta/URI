#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char,int>a, pair<char,int> b){ 
     return a.second!=b.second?a.second>b.second:a.first<b.first;
}

int main(){
	int n;
	cin>>n;
	cin.ignore();
	for(int c=0;c<n;c++){
		string s;
		map<char,int> letters;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			char C=tolower(s[i]);
			if(C>='a'&&C<='z'){
				if(letters.find(C)!=letters.end()){
					letters[C]++;
				}else{
					letters[C]=1;
				}
			}
		}
		vector<pair<char,int> > mapvec(letters.begin(), letters.end());
		sort(mapvec.begin(), mapvec.end(), cmp);
		int i=0;
		while(1){
			cout<<mapvec[i++].first;
			if(mapvec[i-1].second!=mapvec[i].second)
				break;
		}
		cout<<endl;
	}
	return 0;
}