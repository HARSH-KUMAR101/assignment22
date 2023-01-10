/*Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int *p,n,m,i;
  int sum=0;
     printf("enter length of value you want: ");
     scanf("%d",&n);

         p=(int*)calloc(n,sizeof(int));

       printf("enter %d values: ",n);
       for(i=0;i<n;i++)
       { scanf("%d",&p[i]);
         sum=sum+p[i];
       }
 printf("enter the total length you  want to extend: ");
 scanf("%d",&m);

         p=(int*)realloc(p,m*sizeof(int));

       printf("enter %d more values: ",m);
       for(i=n;i<m;i++)
       { scanf("%d",&p[i]);
         sum=sum+p[i];
       }
       printf("sum of all num is %d",sum);
     free(p);
 return 0;
}
