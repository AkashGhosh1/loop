#include<stdio.h>
int main()

{
    int i,m,temp,n;

    scanf("%d",&m);

    for(n=1;n<=m;n++)
    {
    temp=n;
    long int sum=0;
    while(temp!=0)
    {
        i=n%10;
        temp=temp/10;

        sum=sum+(i*i*i);
    }
    if(sum==n)
    printf("%d is armstrong num",n);
    }
}
