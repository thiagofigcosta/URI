#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int a,rat=0,frog=0,rabit=0,total;
	cout.precision(2);
	cin>>a;
	string t;
	for(int i=0;i<=a;i++){
		getline(cin,t);
		if(t[t.size()-1]=='C'){
			t.pop_back();
			t.pop_back();
			rabit+=stoi(t.c_str());
		}else if(t[t.size()-1]=='S'){
			t.pop_back();
			t.pop_back();
			frog+=stoi(t.c_str());
		}else if(t[t.size()-1]=='R'){
			t.pop_back();
			t.pop_back();
			rat+=stoi(t.c_str());
		}
	}
	total=rabit+frog+rat;
	cout<<fixed<<"Total: "<<total<<" cobaias"<<endl;
	cout<<fixed<<"Total de coelhos: "<<rabit<<endl;
	cout<<fixed<<"Total de ratos: "<<rat<<endl;
	cout<<fixed<<"Total de sapos: "<<frog<<endl;
	cout<<fixed<<"Percentual de coelhos: "<<(float)rabit/total*100<<" %"<<endl;
	cout<<fixed<<"Percentual de ratos: "<<(float)rat/total*100<<" %"<<endl;
	cout<<fixed<<"Percentual de sapos: "<<(float)frog/total*100<<" %"<<endl;
	return 0;
}