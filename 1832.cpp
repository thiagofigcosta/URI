#include <bits/stdc++.h>
using namespace std;

int main(){
	string in;
	map<int,char> EBCDIC;
	EBCDIC[0]='\0';

	EBCDIC[64]=' ';

	EBCDIC[74]='c';//c cortado
	EBCDIC[75]='.';
	EBCDIC[76]='<';
	EBCDIC[77]='(';
	EBCDIC[78]='+';
	EBCDIC[79]='|';

	EBCDIC[90]='!';
	EBCDIC[91]='$';
	EBCDIC[92]='*';
	EBCDIC[93]=')';
	EBCDIC[94]=';';
	EBCDIC[95]='¬';
	EBCDIC[96]='-';
	EBCDIC[97]='/';

	EBCDIC[106]='¦';
	EBCDIC[107]=',';
	EBCDIC[108]='%';
	EBCDIC[109]='-';
	EBCDIC[110]='>';
	EBCDIC[111]='?';

	EBCDIC[121]='\'';
	EBCDIC[122]=':';
	EBCDIC[123]='#';
	EBCDIC[124]='@';
	EBCDIC[125]='\'';
	EBCDIC[126]='=';
	EBCDIC[127]='\"';

	EBCDIC[129]='a';
	EBCDIC[130]='b';
	EBCDIC[131]='c';
	EBCDIC[132]='d';
	EBCDIC[133]='e';
	EBCDIC[134]='f';
	EBCDIC[135]='g';
	EBCDIC[136]='h';
	EBCDIC[137]='i';

	EBCDIC[145]='j';
	EBCDIC[146]='k';
	EBCDIC[147]='l';
	EBCDIC[148]='m';
	EBCDIC[149]='n';
	EBCDIC[150]='o';
	EBCDIC[151]='p';
	EBCDIC[152]='q';
	EBCDIC[153]='r';

	EBCDIC[162]='s';
	EBCDIC[163]='t';
	EBCDIC[164]='u';
	EBCDIC[165]='v';
	EBCDIC[166]='w';
	EBCDIC[167]='x';
	EBCDIC[168]='y';
	EBCDIC[169]='z';

	EBCDIC[192]='{';

	EBCDIC[193]='A';
	EBCDIC[194]='B';
	EBCDIC[195]='C';
	EBCDIC[196]='D';
	EBCDIC[197]='E';
	EBCDIC[198]='F';
	EBCDIC[199]='G';
	EBCDIC[200]='H';
	EBCDIC[201]='I';

	EBCDIC[208]='}';

	EBCDIC[209]='J';
	EBCDIC[210]='K';
	EBCDIC[211]='L';
	EBCDIC[212]='M';
	EBCDIC[213]='N';
	EBCDIC[214]='O';
	EBCDIC[215]='P';
	EBCDIC[216]='Q';
	EBCDIC[217]='R';

	EBCDIC[226]='S';
	EBCDIC[227]='T';
	EBCDIC[228]='U';
	EBCDIC[229]='V';
	EBCDIC[230]='W';
	EBCDIC[231]='X';
	EBCDIC[232]='Y';
	EBCDIC[233]='Z';

	EBCDIC[240]='0';
	EBCDIC[241]='1';
	EBCDIC[242]='2';
	EBCDIC[243]='3';
	EBCDIC[244]='4';
	EBCDIC[245]='5';
	EBCDIC[246]='6';
	EBCDIC[247]='7';
	EBCDIC[248]='8';
	EBCDIC[249]='9';
	while(getline(cin,in)){
		string out="";
		for(int i=0;i<in.size();i+=4){
			out+=EBCDIC[(in[0+i]-48)*64+(in[1+i]-48)*8+(in[2+i]-48)];
		}
		cout<<out<<endl;
	}
}