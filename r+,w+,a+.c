#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char str[50];
	if((fptr=fopen("test.txt","r+"))==NULL)
	//if((fptr=fopen("test.txt","w+"))==NULL)
	//if((fptr=fopen("test.txt","a+"))==NULL)
	{
		printf("Cannot open a file\n");
		exit(1);
	}
	else
	{
		printf("Enter a string: ");
		while(gets(str)!=NULL)
		{
			fputs(str,fptr);
		}
		printf("\n");
	}
	fclose(fptr);
	return 0;
}


