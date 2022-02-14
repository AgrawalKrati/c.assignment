#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int x[10],n,i,j,f=0;    
 printf("Enter a number : ");    
scanf("%d",&n);  

for(i=0;n>0;i++)    
    {    
        x[i]=n%2;    
        n=n/2;    
    }    
printf("Before:");    
for(i=i-1;i>=0;i--)    
    {    
        printf("%d",x[i]);
        f++;
    }
printf(" After:"); 
for(i=0;i<f;i++)    
    {    
        printf("%d",x[i]);    
    } 
return 0;  
}
