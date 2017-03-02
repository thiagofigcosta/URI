#include <iostream>

using namespace std;
int main(){
	int n;
	int caso=0;
	while(cin>>n){
		caso++;
		double numbers[10];
		for(int j=0;j<10;j++)
			cin>>numbers[j];
		cout<<"Caso "<<caso<<": ";
		for(int j=0;j<n;j++){
			double big=numbers[0];
			int bigPos=0;
			for(int i=1;i<10;i++){
				if(numbers[i]>big){
					big=numbers[i];
					bigPos=i;
				}
			}
			cout<<bigPos;
			numbers[bigPos]=-1;
			}
		cout<<endl;
	}
	return 0;
}
