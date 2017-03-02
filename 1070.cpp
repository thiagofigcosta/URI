#include <iostream>
using namespace std;

int main(){
	int x;
	int c=0;
	cin>>x;
	for(int i=x+1;c<=5;i++)
    	if(i%2!=0){
    		cout<<i<<endl;
			c++;
    	}
    return 0;
}