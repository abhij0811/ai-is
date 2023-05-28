//is-2
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int n,i,j,k;
    char a[20],c[20],d[20];
    n=strlen(a);
    printf("Enter input string=");
    scanf(a);
    for(i=0,j=0;i<n;i++)
    {
       if(i%2==0)
       {
        c[j++]=a[i];
       }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            c[j++]=a[i];
        }
    }
    c[j]="\0";
    printf("\n%s",c);

    if(i%2==0)
    {
        k=n/2;
    }
    else{
        k=(n/2)+n;
    }

    for(i=0,j=0;i<k;i++)
    {
        d[j]=c[i];
        j=j+2;

    }
    for(i=k,j=n;i<n;i++)
    {
        d[j]=c[i];
        j=j+2;

    }
    d[n]="\0";
    printf("%s",d);
}







