#include <bits/stdc++.h>
using namespace std;

void process(char cmd, vector<char> &vec, string &in,int &pointer,int &inpointer, int &cmdptr,map<int,int> &bras){
	switch(cmd){
		case '[':
			if(!vec[pointer])
	          cmdptr=bras[cmdptr];
			break; 
		case ']':
			if(vec[pointer])
	          cmdptr=bras[cmdptr];
			break;
		case '>':
			pointer++;
			break; 
		case '<':
			pointer--;
			break; 
		case '+':
			vec[pointer]++;
			break; 
		case '-':
			vec[pointer]--;
			break; 
		case '.':
			cout<<vec[pointer];
			break; 
		case ',':
			if(inpointer<in.size())
				vec[pointer]=in[inpointer++];
			else
				vec[pointer]=0;
			break; 
		case '#':
			for(int i=0;i<10;i++)
				cout<<vec[i];
			break; 
	}
}

int main(){
	int n;cin>>n;
	for(int c=1;c<=n;c++){
		int pointer=0,inpointer=0;
		vector<char> vec(30000);
		map<int,int> cmdidx;
		stack<int> bras;
		string in, cmd;
		cin>>in>>cmd;
		for(int i=0;i<cmd.size();i++)
			if(cmd[i]=='[')
				bras.push(i);
			else if(cmd[i]==']'){
				cmdidx[i]=bras.top();
				cmdidx[cmdidx[i]]=i;
				bras.pop();
			}
		cout<<"Instancia "<<c<<endl;
		for(int i=0;i<cmd.size();i++){
			process(cmd[i],vec,in,pointer,inpointer,i,cmdidx);
		}
		cout<<endl<<endl;
	}
	return 0;
}