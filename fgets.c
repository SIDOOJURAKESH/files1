#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fptr;
char str[50];
if((fptr=fopen("new.txt","r"))==NULL)
{
printf("error!");
exit(1);
}
while(fgets(str,50,fptr)!=NULL)
puts(str);
fclose(fptr);
return 0;
}
