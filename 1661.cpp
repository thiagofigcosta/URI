#include <iostream>

using namespace std;

int abs(int n){
    if(n<0)
        return -n;
    return n;
}

int main(){
	int n,i,c,mino,wine[100001],buyers[100001],sellers[100001],sizeB,sizeS;
	long long work;
	while(cin>>n,n){
        sizeS=0;
        sizeB=0;
        work=0;
		for(i=0;i<n;i++){
			cin>>wine[i];
			if(wine[i]<0){
				sellers[sizeS++]=i;
			}else{
				buyers[sizeB++]=i;
			}
		}
		for(c=0;c<sizeB;){
			for(i=0;i<sizeS;i++){
                if(-wine[sellers[i]]<wine[buyers[c]])
                    mino=-wine[sellers[i]];
                else
                    mino=wine[buyers[c]];
                wine[sellers[i]]+=mino;
                wine[buyers[c]]-=mino;
                work+=abs(buyers[c]-sellers[i])*mino;
                if(wine[sellers[i]]==0){
                    sizeS--;
                    for(n=i;n<sizeS;n++)
                        sellers[n]=sellers[n+1];
                    i--;
                }
                if(wine[buyers[c]]==0){
                    c++;
                    break;
                }
			}
		}
		cout<<work<<endl;
	}
	return 0;
}
/*/
#include <iostream>
using namespace std;
int main(){
	int n,i,c,min,wc,wi,wine[100001];
	long long work;
	while(cin>>n,n){	
		work=0;
		for(i=0;i<n;i++,c=i+1)cin>>wine[i];
		for(c=0;c<n-1;c++){
			for(i=c+1;wine[c]!=0&&i<n;i++){			
				if(wine[i]!=0&&(wine[c]&4294967296)!=(wine[i]&4294967296)){//int=32bits. -- 4294967296=signal
					wc=wine[c]<<1,wi=wine[i]<<1,min=wc<wi?wi>>1:wc>>1,work+=(i-c)*min;
					if(wine[c]&4294967296)
						wine[c]+=min,wine[i]-=min;
					else
						wine[i]+=min,wine[c]-=min;
				}
			}
		}
		cout<<work<<endl;
	}
	return 0;
}
/*/