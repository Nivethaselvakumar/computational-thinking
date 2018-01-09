#include <stdio.h>

int main()
     {
     int n;
     int i=1,j,bin=0,temp;

     scanf("%d",&n);

     temp=n;
     

      for(j=n;j>0;j=j/2)
       {
        bin=bin+(n%2)*i;
        i=i*10;
        n=n/2;
       }
     
     printf("%d",bin);
 }
