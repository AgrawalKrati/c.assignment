#include <stdio.h>
#include <string.h>
#include <math.h>


char str[100];
void removeCharacter(int i)
{
    for(;str[i]!='\0';)
    {
        str[i]=str[i+2];
        str[i+1]=str[i+3];
        i+=2;

    }
}

int main()
{
    int i=0,len=0,str_len;
   
     printf("Enter Length of String :\n");
     scanf("%d",&str_len);
   
   
    printf("Enter String :\n");
    scanf("%s",str);
    for(;str[len]!='\0';len++);
    for(;i<len;)
    {
        if((str[i] == str[i+1] ) && (i >= 0) && str[i]!='\0')
        {
            removeCharacter(i);
            i--;
        }
        else
        {
            i++;
        }
    }
    if(str[0]=='\0')
       printf("Empty String");
    else
       printf("%s\n",str);

    return 0;
    }
