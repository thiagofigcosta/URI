#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	float I=0;
	int J=7,i=0;
	
	while(I<=2.2||J!=3){
		switch(i){
			case 0:J=1;break;
			case 1:J=2;break;
			case 2:J=3;break;
		}
		if(I==1||I>=2||I==0){
			cout.precision(0);
		}else{
			cout.precision(1);
		}
		cout<<fixed<<"I="<<I<<" J="<<I+J<<endl;
		i++;if(i==3){i=0;I+=.2;}
	}
	return 0;
}