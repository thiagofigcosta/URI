#include <bits/stdc++.h>
using namespace std;

vector<bool> numberToFibs(int n, vector<int> &fibs){
	if(n<=0){
		vector<bool> zerr(1,false);
		return zerr;
	} 
	int idx=0;
	while(fibs[idx]<=n){
		idx++;
		if(idx==fibs.size()){
			fibs.push_back(fibs[idx-1]+fibs[idx-2]);
		}
	}
	vector<bool> out(idx,false);
	idx--;
	while(idx>=0){
		if(n>=fibs[idx]){
			out[idx]=true;
			n-=fibs[idx];
		}
		idx--;
	}
	return out;
}

int fibsToNumber(vector<bool> n, vector<int> &fibs){
	int out=0;
	for(int i=0;i<n.size();i++){
		if(n[i]){
			if(i==fibs.size()){
				fibs.push_back(fibs[i-1]+fibs[i-2]);
			}
			out+=fibs[i];
		}
	}
	return out;
}

void genFibsVector(vector<int> &fibs, int n){
	fibs.clear();
	int f1=0,f2=1;
	for(int i=0;i<n;i++){
		fibs.push_back(f1+f2);
		f1=f2;
		f2=fibs[i];
	}
}	

int main(){
	vector<int> fibs;
	genFibsVector(fibs,20);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int mile;
		cin>>mile;
		vector<bool> inFibs =numberToFibs(mile,fibs);
		inFibs.erase(inFibs.begin()+0);
		cout<<fibsToNumber(inFibs,fibs)<<endl;
	}
	return 0;
}