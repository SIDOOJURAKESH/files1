#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char str[50];
    if((fptr=fopen("test.txt","w"))==NULL)
      {
        printf("error!");
        exit(1);
      }
     printf("enter the text \n");
     while(gets(str)!=NULL)
      {
        fputs(str,fptr);
      }
        return 0;
}
