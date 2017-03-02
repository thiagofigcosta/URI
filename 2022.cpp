#include <bits/stdc++.h>
using namespace std;

struct gift{
	static bool cmp(gift a, gift b){
		if(a.priority!=b.priority)
			return a.priority>b.priority;
		else if(a.price!=b.price)
			return a.price<b.price;
		else
			return a.name<b.name;
	}
	string name;
	float price;
	int priority;
};

int main(){
	string name;
	int ammount;
	while(cin>>name>>ammount){
		vector<gift> gifts;
		for(int i=0;i<ammount;i++){
			gift g;
			cin.ignore();
			getline(cin,g.name);
			cin>>g.price>>g.priority;
			gifts.push_back(g);
		}
		sort(gifts.begin(),gifts.end(),gift::cmp);
		cout<<"Lista de "<<name<<endl;
		for(gift gif:gifts)
			cout<<gif.name<<" - R$"<<setprecision(2)<<fixed<<gif.price<<endl;
		cout<<endl;
	}
	return 0;
}