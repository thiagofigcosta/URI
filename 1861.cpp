#include <bits/stdc++.h>
using namespace std;

int main(){
	map<string, int>killers;
	vector<string> queens;
	string killer, queen;
	int pos,itr=0;
	while(cin>>killer>>queen){
		if(killers.find(killer)!=killers.end()){
			killers[killer]++;
		}else{
			killers[killer]=1;
		}
		queens.push_back(queen);
	}
	for(string s:queens)
		killers.erase(s);

	cout<<"HALL OF MURDERERS\n";
	for(map<string,int>::iterator i=killers.begin();i!=killers.end();i++){
	    cout<<i->first<<" "<<i->second<<endl;
	}

	return 0;
}