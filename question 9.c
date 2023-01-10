/*Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,*p;
    printf("enter number of bytes you want to allocate: ");
    scanf("%d",&n);
      p=(int*)malloc(n);
     if(p==NULL)
        printf("memory allocation failed");
     else
        printf("%d bytes memory allocated",n);
  return 0;
}
