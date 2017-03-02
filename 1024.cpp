#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();
	for(int c=0;c<n;c++){
		string uncrypted;
		getline(cin,uncrypted);
		string crypted=uncrypted;
		for(int i=0;i<uncrypted.size();i++){
			crypted[uncrypted.size()-1-i]=uncrypted[i];
			if((uncrypted[i]>=65&&uncrypted[i]<=90)||(uncrypted[i]>=97&&uncrypted[i]<=122))
				crypted[uncrypted.size()-1-i]+=3;
		}
		for(int i=0;i<uncrypted.size();i++)
			if(i>=uncrypted.size()/2)
				crypted[i]-=1;
		cout<<crypted<<endl;
	}
	return 0;
}