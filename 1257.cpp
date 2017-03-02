#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int c=0;c<n;c++){
		int amount;
		cin>>amount;
		long out=0;
		for(int i=0;i<amount;i++){
			string letters;
			cin>>letters;
			for(int j=0;j<letters.size();j++){
				out+=(letters[j]-65)+i+j;
			}
		}
		cout<<out<<endl;
	}	
	return 0;
}