#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n;
	char in[2000];
	int out;
	cin>>n;
	for(int i=0;i<n;i++){
		out=1;
		cin>>in;
		for(int j=0;j<strlen(in);j++)
			if(tolower(in[j])=='a'||tolower(in[j])=='e'||tolower(in[j])=='i'||tolower(in[j])=='o'||tolower(in[j])=='s')
				out*=3;
			else
				out*=2;
		cout<<out<<endl;
			
		in[0]='\0';
	}
	return 0;
}