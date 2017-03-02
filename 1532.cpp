#include <bits/stdc++.h>

using namespace std;

bool onTheHole(int dist, int speed){
	for(int s=speed;s>0;s--){
		int totalDist=s*s;
		if(dist<=totalDist&&dist%s==0)
			return true;
		dist-=totalDist;
		if(dist<=0)
			return false;
	}
	return false;
}

bool checkAllTheHoles(int dist, int speed){
	for(int i=speed;i>=1;i--)
		if(onTheHole(dist,i)) 
			return true;
	return false;
}

int main(){
	int a,b;
	while(cin>>a>>b,a&&b){
		if(checkAllTheHoles(a,b))
			cout<<"possivel\n";
		else 
			cout<<"impossivel\n";
	}

	return 0;
}