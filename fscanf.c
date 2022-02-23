#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
fptr = fopen("file.txt","r");
   if (fptr== NULL)
   {
       printf("error");
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("%d", num);
   fclose(fptr); 
  
   return 0;
}
