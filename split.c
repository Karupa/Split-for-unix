#include<stdio.h>
#include<stdlib.h>
void main()
{
   FILE *f1,*f[100],*f3;
   char c[1000],filename[20];
  int i,j,k,n;
  f1=fopen("mainfile.txt","r+");
  printf("number of file=");
  scanf("%d",&k);
  printf("enter the number of lines=");
  scanf("%d",&n);
  for(i=1;i<=k;i++)
	{       sprintf(filename,"file%d.txt",i);
		f[i]=fopen(filename,"w+");
                fgets(c,100,f1);
		for(j=1;j<=n;j++)
		   {
		     fputs(c,f[i]);
		     fgets(c,100,f1);
                                             
                    }
                    fclose(f[i]);
          }
         fclose(f1);
}
						
  
