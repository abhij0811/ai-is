//is-1
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[]="Hello World";
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        printf("%c",str[i]&127);
        
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%c",str[i]^127);
    }
}