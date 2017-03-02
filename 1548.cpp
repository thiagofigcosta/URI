#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b){
	return a>b;
}

int canteenQueue(vector<int> &grades){
	vector<int> sorted=grades;
	sort(sorted.begin(), sorted.end(),compare);
	int out=0;
	for(int i=0;i<sorted.size();i++)
		if(sorted[i]==grades[i])
			out++;
	return out;
}

int main(){
	int n;
	cin>>n;
	for(int k=0;k<n;k++){
		int s;
		cin>>s;
		vector<int> queue;
		for(int i=0;i<s;i++){
			queue.push_back(0);
			cin>>queue[i];
		}
		cout<<canteenQueue(queue)<<endl;

	}
	return 0;
}