/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,i,sum=0;
  int *p;
  float avg;
      printf("enter number of values you want to enter: ");
      scanf("%d",&n);
       p=(int *)calloc(n,sizeof(int));
     printf("enter %d values: ",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&p[i]);
         sum=sum+p[i];
     }
     avg=sum/n;
     printf("average of given number is %.2f",avg);
     free(p);
 return 0;
}
