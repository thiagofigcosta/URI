#include <bits/stdc++.h>
using namespace std;
int main(){
	set<string> results;
	register float i,j,k,l;
	register float sum, mult;
	for(i=0;i<=20;i+=0.01){
		for(j=0;j<=20;j+=0.01){
			for(k=0;k<=20;k+=0.01){
				for(l=0;l<=20;l+=0.01){
					sum=i+j+k+l;
					if(sum<=20){
						mult=i*j*k*l;
						if(sum==mult){
							char buff[25];
  							snprintf(buff, sizeof(buff), "%.02f %.02f %.02f %.02f", i,j,k,l);
							results.insert(string(buff));
						}
					}
				}
			}
		}
	}
	for(string s:results)
		printf("%s\n", s);

	return 0;
}