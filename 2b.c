#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char x[10][100],y[10][100],str[100];
void main ()
{
	FILE *f1;
	f1=fopen("file.txt","r");
	int num=5,k;
	scanf("%s",str);

for(int i=0;i<num;i++)
{
	fscanf(f1,"%s",x[i]);
	fscanf(f1,"%s",y[i]);
	if(strcmp(str,y[i]) == 0)
	k = i;
}
int count = 0;
for(int i=0;i<num;i++)
{
	if(strcmp(x[k],y[i]) == 0)
	count++;
}
printf("%d\n",count);
fclose(f1);
}
