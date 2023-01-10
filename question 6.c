/*Write a program in C to find the largest element using Dynamic Memory Allocation.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,*p,i,max=0;
    printf("enter length of elements: ");
    scanf("%d",&n);
      p=(int*)calloc(n,sizeof(int));
      printf("enter %d elements to get largest element: ",n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&p[i]);
          if(max<p[i])
            max=p[i];
      }

        printf("%d is the largest element",max);
    free(p);
 return 0;
}
