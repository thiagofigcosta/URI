#include <stdio.h>
#include <string.h>

int main(){
	int a;
	char in[10];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%s",in);
		if(strlen(in)>3)
			printf("3\n");
		else{
			if((in[0]=='o'&&in[1]=='n')||(in[1]=='n'&&in[2]=='e')||(in[0]=='o'&&in[2]=='e'))
				printf("1\n");
			else
				printf("2\n");
		}
		in[0]='\0';
	}
	return 0;
}