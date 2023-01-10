/*Write a program to calculate the sum of n numbers entered by the user using malloc
and free.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,i,sum=0;
  int *p;
      printf("enter number of values you want to enter: ");
      scanf("%d",&n);
       p=(int *)malloc(n*sizeof(int));
     printf("enter %d values: ",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&p[i]);
         sum=sum+p[i];
     }
     printf("sum of given number is %d",sum);
     free(p);
 return 0;
}
