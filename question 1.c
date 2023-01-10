/*Define a function to input variable length string and store it in an array without
memory wastage.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,i;
  char *p;
    printf("enter length of the string: ");
    scanf("%d",&n);
    p=(char*)malloc(n+1);
     printf("enter string of %d length: ",n);
      for(i=0;i<n+1;i++)
      {
        scanf("%c",&p[i]);
      }
       for(i=0;i<n+1;i++)
      {
        printf("%c",p[i]);
      }


    free(p);
 return 0;
}
