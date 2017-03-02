#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int I=1,J=7,i=0;
	cout.precision(2);
	while(I!=11||J!=5){
		switch(i){
			case 0:J=7;break;
			case 1:J=6;break;
			case 2:J=5;break;
		}
		cout<<fixed<<"I="<<I<<" J="<<I+J-1<<endl;
		i++;if(i==3){i=0;I+=2;}
	}
	return 0;
}