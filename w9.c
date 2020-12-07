#include<stdio.h>
int main()
{
    int n,row,col,cnt=1;
    scanf("%d",&n);

   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
        printf("%d",cnt++);
       }
       printf("\n");
   }

    return 0;
}

