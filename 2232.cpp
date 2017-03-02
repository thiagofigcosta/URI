#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	int a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cout<<(long)pow(2,a)-1<<endl;
	}
	return 0;
}