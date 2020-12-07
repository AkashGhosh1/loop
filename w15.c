#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;


    for(cnt=0;cnt<=n;cnt++){
      if(n%2==0)
        {
            printf("%d ",n);
            cnt=cnt+1;
            if(cnt==n)
            {
                return 0;
            }
        }
}

}
