#include<stdio.h>
int main(){
int n;
int i,sum=0;
scanf("%d",&n);
int cnt=n;

    for(i=1;i<=cnt+1;i++)
    {

    if(i%2==0)
    {
        printf("%d ",i);
        cnt++;
        sum=sum+i;
    }
  }
  printf("\n");
  printf("sum is:%d",sum);

  }

