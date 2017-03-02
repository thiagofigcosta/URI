#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	map<int,int> leds;
	leds[1]=2;
	leds[2]=5;
	leds[3]=5;
	leds[4]=4;
	leds[5]=5;
	leds[6]=6;
	leds[7]=3;
	leds[8]=7;
	leds[9]=6;
	leds[0]=6;
	for(int c=0;c<n;c++){
		string s;
		cin>>s;
		int o=0;
		for(int i=0;i<s.size();i++)
			o+=leds[(int)(s[i]-48)];
		cout<<o<<" leds\n";
	}
	return 0;
}