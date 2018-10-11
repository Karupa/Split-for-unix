#include<stdio.h>
void main()
{
  FILE *f;
  int i=1,n;
  printf("enter the number of lines=");
  scanf("%d",&n);
  f=fopen("mainfile.txt","w");
  while(i<n)
   {
      fprintf(f,"line%d\n",i);
      
       i++;
    }fclose(f);
}
