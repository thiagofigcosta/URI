#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float xa,ya,xb,yb;
	cin>>xa>>ya>>xb>>yb;
	cout.precision(4);
	cout<<fixed<<sqrt(pow(xb-xa,2)+pow(yb-ya,2))<<endl;
	return 0;
}