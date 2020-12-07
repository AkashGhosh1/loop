//n number theke nth number er modde jotogula armstroms number ase ber kora
#include<stdio.h>
int main()
{
    int num,t,j,i;
    int sum;
    int fno;
    printf("enter starting number:");
    scanf("%d",&fno);
    printf("enter ending number:");
    scanf("%d",&num);

    for(j=fno;j<=num;j++)
    {
        sum=0;
    for(t=j;t!=0;t=t/10)
    {
        i=t%10;
        sum=sum+(i*i*i);
    }
    if(sum==j)
        printf("%d is armstrong number\n",j);
}
}
