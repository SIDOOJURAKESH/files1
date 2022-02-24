#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	FILE *dest,*src;
	char ch;
	if((src=fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot open a file\n");
		exit(1);
	}
	if((dest=fopen(argv[2],"w"))==NULL)
	{
		printf("Cannot open a file\n");
		exit(1);
	}
	while((ch=fgetc(src))!=EOF)
	{
		fputc(ch,dest);
	}
	printf("\n");
	fclose(src);
	fclose(dest);
	return 0;
}
