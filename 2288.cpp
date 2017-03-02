#include <iostream>

using namespace std;

int offset(int value,int maxPlusOne){
	while(value>=maxPlusOne)
		value-=maxPlusOne;
	while(value<0)
		value+=maxPlusOne;
	return value;
}

int main(){
	int n,m;
	int count=0;
	do{
		count++;
		cin>>n>>m;
		if(n==0||m==0)
			break;
		int matrix[n][m];
		int bkp[n][m];
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>matrix[i][j];
			bkp[i][j]=matrix[i][j];
		}
		int x,y;
		int finalx=0,finaly=0;
		do{
			cin>>x>>y;
			finalx+=x;
			finaly+=y;
		}while(x!=0||y!=0);
		cout<<"Teste "<<count<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				matrix[i][j]=bkp[offset(i+finaly,n)][offset(j-finalx,m)];
				cout<<matrix[i][j];
				if(j<m-1)
					cout<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}while(true);

	return 0;
}