#include<stdio.h>
int main()
{
    int j,i,sum;
    int n,m;
    printf("Input the starting range or number : ");
    scanf("%d",&m);
    printf("Input the ending range or number : ");

    scanf("%d",&n);

    for(i=m;i<=n;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }

        }
        if(sum==i)
            {
                printf("The Perfect numbers within the given range :%d\n",i);
            }

    }


}
