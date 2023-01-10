/*Write a program to demonstrate memory leak in C.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,*p;
    printf("enter number of bytes you want to reserve: ");
    scanf("%d",&n);
      p=(int*)malloc(n);
      p=(int*)malloc(32);/*we need to free the memory after first we allocate else it is gone to leak*/
  free(p);
 return 0;
}
