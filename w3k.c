#include<stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    int i;
    double ans=0.0;

    for(i=1;i<=n;i++)
    {
        ans=ans+1.0/n;

    }

   printf("%lf",ans);
}
