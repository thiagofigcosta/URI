#include <iostream>
#include <string>
using namespace std;

void swap(int *v, string* str,int a, int b){
	int t=v[a];
	v[a]=v[b];
	v[b]=t;
	if(str==NULL)return;
	string x=str[a];
	str[a]=str[b];
	str[b]=x;
}

bool cmp(int i0, string s0, int i1, string s1){
	return(i0>i1)||(i0==i1&&s0<s1);
}

void quickr(int *v, string*s,int l, int r){
	int i=l;
	int j=r;
	int pivo=v[(l+r)/2];
	string pivostr;
	if(s!=NULL)pivostr=s[(l+r)/2];
	while(i<=j){
		if(s!=NULL){
			while(cmp(pivo,pivostr,v[i],s[i])) i++;
			while(cmp(v[j],s[j],pivo,pivostr)) j--;
		}else{
			while(v[i]<pivo) i++;
			while(v[j]>pivo) j--;
		}
		if(i<=j) swap(v,s,i++,j--);
	}
	if(l<j)quickr(v,s,l,j);
	if(r>i)quickr(v,s,i,r);
}


void quick(int *v,string *s,int n){
	quickr(v,s,0,n-1);
}

int main(){
	int n,teste=1;
	while(cin>>n,n){
		string *nomes=new string[n];
		int *ponto=new int[n];
		int **pontos=new int*[n];
		for(int i=0;i<n;i++){
			pontos[i]=new int[12];
			cin>>nomes[i];
			for(int j=0;j<12;j++)
				cin>>pontos[i][j];
			quick(pontos[i],NULL,12);
			ponto[i]=0;
			for(int j=1;j<11;j++)
				ponto[i]+=pontos[i][j];
			delete pontos[i];
		}
		delete[] pontos;
		quick(ponto,nomes,n);
		cout<<"Teste "<<teste++<<endl;
		int oldPonto=-1;
		int colocacao=n-1;
		for(int i=n-1;i>=0;i--){
			if(oldPonto!=ponto[i]){
				colocacao=i;
			}
			oldPonto=ponto[i];
			cout<<(n-colocacao)<<" "<<ponto[i]<<" "<<nomes[i]<<endl;
		}
		cout<<endl;
		delete[] ponto;
		delete[] nomes;
	}
	return 0;
}