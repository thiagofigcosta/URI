#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	string a,b,c,d;
	getline (cin,a);
	getline (cin,b);
	getline (cin,c);
	getline (cin,d);
	cout.precision(2);
	string t="";
	for(int i=3;i<a.size();i++)
		t+=a[i];
	int sD=stoi(t.c_str());
	t="";
	for(int i=3;i<c.size();i++)
		t+=c[i];
	int eD=stoi(t.c_str());

	t="";
	t+=b[0];t+=b[1];
	int sH=stoi(t.c_str());
	t="";
	t+=b[5];t+=b[6];
	int sM=stoi(t.c_str());
	t="";
	t+=b[10];t+=b[11];
	int sS=stoi(t.c_str());
	t="";
	t+=d[0];t+=d[1];
	int eH=stoi(t.c_str());
	t="";
	t+=d[5];t+=d[6];
	int eM=stoi(t.c_str());
	t="";
	t+=d[10];t+=d[11];
	int eS=stoi(t.c_str());

	long timesecS=sS+sM*60+sH*3600+sD*86400;
	long timesecE=eS+eM*60+eH*3600+eD*86400;
	
	long diff=timesecE-timesecS;

	int dD=diff/86400;
	diff-=dD*86400;
	int dH=diff/3600;
	diff-=dH*3600;
	int dM=diff/60;
	diff-=dM*60;
	int dS=diff;
	cout<<fixed<<dD<<" dia(s)"<<endl;
	cout<<fixed<<dH<<" hora(s)"<<endl;
	cout<<fixed<<dM<<" minuto(s)"<<endl;
	cout<<fixed<<dS<<" segundo(s)"<<endl;
	return 0;
}