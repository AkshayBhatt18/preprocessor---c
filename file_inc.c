#include"header.h"

void header_file(FILE *sf,FILE *df,int l)
{
	FILE *hed;
	int i,j,k,n,m;
	char s[10],s1[30]={"/usr/include/"},ch;

	for(i=0;i<l;i++)
	{
		if(strstr(p[i],"#include"))
		{
			for(j=9,k=0;(p[i][j]!='>' && p[i][j]!='"');j++,k++)
				s[k]=p[i][j];
			s[k]=0;

			for(n=13,m=0;n<(13+k); )
				s1[n++]=s[m++];

			printf("p[%d]=%s\n",i,s1);  

			if((hed=fopen(s1,"r"))!=0)
			{
				while((ch=fgetc(hed))!=EOF)
					fputc(ch,df);	
			}
			else if((hed=fopen(s,"r"))!=0)
			{
				printf("%s",s);
				while((ch=fgetc(hed))!=EOF)
					fputc(ch,df);
			}
		}
	}
}
