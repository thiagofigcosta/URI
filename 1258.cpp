#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Shirt{
	string owner;
	string color;
	char   size;

	void print(){
		cout<<color<<" ";
		cout<<size<<" ";
		cout<<owner<<"\n";
	}

	static bool Cmp(Shirt a, Shirt b){
		if(a.color<b.color){
			return true;
		}else if(a.color==b.color){
			if(a.size>b.size){
				return true;
			}else if(a.size==b.size){
				if(a.owner<b.owner){
					return true;
				}else{
					return false;
				}
			}
		}
		return false;
	}
};

int main(){
	int n;
	bool frst=true;
	while(cin>>n,n){
		if(!frst){cout<<endl;}else{frst=false;}
		Shirt shirts[n];
		for(int c=0;c<n;c++){
			cin.ignore(1);
			getline(cin,shirts[c].owner);
			cin>>shirts[c].color;
			cin>>shirts[c].size;
		}
		sort(shirts,shirts+n,&Shirt::Cmp);
		for(int c=0;c<n;c++)
			shirts[c].print();
	}

	return 0;
}