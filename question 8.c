/*Write a program to demonstrate dangling pointers in C.*/
#include<stdio.h>
#include<stdlib.h>
int *fun()
{ int x=10;
   return &x;
}
int main()
{ int *p=fun();
    printf("address after calling function is %d",*p);
  return 0;
}
