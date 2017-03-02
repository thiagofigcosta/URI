#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,c,m=0;
	vector<int> gnomes;
	vector<char> letters;
	for(int i=0;i<26;i++){
		gnomes.push_back(i);
		letters.push_back((char)(65+(i)%26));
	}
	while(cin>>n){
		if(m)
			cout<<endl;
		m++;
		string line;
		vector<string> lista;
		vector<int> g=gnomes;
		vector<char> l=letters;
		cout<<"LISTA #"<<m<<":\n";
		cin.ignore();
		for(int i=0;i<n;i++){
			string out="";
			vector<int> linevec;
			getline(cin,line);
			istringstream iss (line) ;
			copy(istream_iterator<int>(iss),istream_iterator<int>(),back_inserter(linevec)) ;
			for(int b=0;b<linevec.size();b++){
				c=linevec[b]-1;
				if(c==26){
					out+=' ';
				}else{
					out+=l[g[c]];
					l.push_back(l[g[c]]);
					g.push_back(g[c]);
					l.erase(l.begin()+g[c]);
					g.erase(g.begin()+c);
				}
			}
			lista.push_back(out);
		}
		sort(lista.begin(), lista.end());
		for(string s:lista)
			cout<<s<<endl;
	}
	return 0;
}