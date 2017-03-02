#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int p=0;p<n;p++){
		map<string,float> prices;
		float total=0;
		int saw,picked;
		cin>>saw;
		for(int i=0;i<saw;i++){
			string name;
			cin>>name;
			float price;
			cin>>price;
			prices[name]=price;
		}
		cin>>picked;
		for(int i=0;i<picked;i++){
			string product;
			cin>>product;
			int ammount;
			cin>>ammount;
			total+=prices[product]*ammount;
		}
		cout<<"R$ "<<setprecision(2)<<fixed<<total<<endl;
	}
	return 0;
}