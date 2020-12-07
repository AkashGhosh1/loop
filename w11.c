#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j,row,col,cnt=1;

    for(row=1;row<=n;row++)
    {
    //for(col=1;col<=row;col++)
       //{
     for(i=n;i>row;i--)
      {
         printf(" ");
      }
         for(j=1;j<=row;j++)
         {
             printf("%d ",cnt++);
         }

       //}
      printf("\n");
   }
}
