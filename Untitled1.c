/**
    *
   ***
  *****
 *******

 **/
 #include<stdio.h>

 int main()
 {
     int row,j,k;
     int n;
     scanf("%d",&n);

     for(row=1;row<n;row++)
     {
         for(j=n-1;j>row;j--)
         {
             printf(" ");
         }

         for(k=1;k<=row*2-1;k++)
         {
             printf("*");
         }
          printf("\n");
     }
return 0;

 }
