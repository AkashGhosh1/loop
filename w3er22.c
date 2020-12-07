#include<stdio.h>
int main()
{
    long int n,m=9,sum=0;
    scanf("%d",&n);

    int row,i;

    for(row=1;row<=n;row++)
    {
         printf("%ld    ",m);
         m=m*10+9;
         sum=sum+m;
    }
   printf("\n");
   printf("sum is=%d",sum);
}
