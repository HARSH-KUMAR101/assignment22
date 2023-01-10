/*Write a program to input and print text using dynamic memory allocation.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,i;
  char *text;
    printf("enter limit of text: ");
    scanf("%d",&n);
      text=(char*)calloc(n,sizeof(char));
    printf("enter text: ");
    for(i=0;i<n;i++)
    {
        scanf("%c",&text[i]);
    }
     printf("inputted text is : ");
      for(i=0;i<n;i++)
    {
        printf("%c",text[i]);
    }
    free(text);
 return 0;
}
