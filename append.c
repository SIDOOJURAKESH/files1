#include<stdio.h>
#include<string.h>
int main()
{
  FILE *fptr;
  char str[100];
  fptr=fopen("data.txt","a");
  printf("enter the data: ");
  gets(str);
  fprintf(fptr,"%s",str);
  printf("your message is appended in data.txt file");
  fclose(fptr);
  return 0;
}
