#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,capacity;
	int c=0;
	while(cin>>n>>capacity,n||capacity){
		c++;
		int bag[n+1][capacity+1];
		int weights[n];
		int values[n];
		for(int i=0;i<n;i++)
			cin>>weights[i]>>values[i];
		for(int i=0;i<=n;i++)
			bag[i][0]=0;
		for(int j=0;j<=capacity;j++)
			bag[0][j]=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=capacity;j++){
				if(weights[i-1]<=j)
                    bag[i][j]=max((values[i-1] + bag[i-1][j-weights[i-1]]), bag[i-1][j]);
                else
                    bag[i][j]=bag[i-1][j];
			}
		}
		cout<<"Caso "<<c<<": "<<bag[n][capacity]<<endl;
	}
	return 0;
}