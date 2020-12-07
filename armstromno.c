#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i,j,sum=0;

    for(i=n;n!=0;n=n/10)
    {
        j=n%10;

        sum=sum+(j*j*j);
    }
    //printf("%d",sum);
    if(n==sum)
    {
        printf("is an armstrong number.\n");
    }
    else
       printf("is not an armstrong number.");
}
