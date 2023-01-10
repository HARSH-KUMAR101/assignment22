/*Find out the maximum and minimum from an array using dynamic memory allocation
in C.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{int n,*p,i,max=0,min=99999;
    printf("enter length of elements: ");
    scanf("%d",&n);
      p=(int*)calloc(n,sizeof(int));
      printf("enter %d elements to get maximum and minimum element: ",n);
      for(i=0;i<n;i++)
      { scanf("%d",&p[i]);
          if(max<p[i])
            max=p[i];
          else if(min>p[i])
             min=p[i];
      }

        printf("%d is the maximum element\n",max);
        printf("%d is the minimum element",min);
    free(p);
 return 0;

}
