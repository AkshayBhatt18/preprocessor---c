#include"header.h"
void macros(int l)
{
	int i,j,k,m;
	char *ch,s[20]={0},s1[20]={0};
	for(i=0;i<l;i++)
	{
		if((ch=strstr(p[i],"#define"))!=0)
		{
			for(j=8,k=0;p[i][j]!='\n';j++)
			{
				if(p[i][j]==' ')
					break;
				s[k++]=p[i][j];
			}
			s[k]='\0';
			for(j,m=0;p[i][j]!='\n';j++)
				s1[m++]=p[i][j];
			s1[m]='\0';
			repl(s,s1,l);
		}
	}
}


void repl(char *s ,char *s1,int l)
{
	char *ch,*ch1,s3[50]={0};
	int len1,len2,len3,i,j,k,a,b;
	for(len1=0;s[len1];len1++);
	for(len2=0;s1[len2];len2++);

	for(i=0;i<l;i++)
	{
		if((ch=strstr(p[i],"main"))!=0)
		{
			while(i<l)
			{
				if(ch=strstr(p[i],s))
				{
					for(ch1=ch+len1,j=1;ch1[j-1]!='\0';j++)
						s3[j]=ch1[j-1];
					s3[0]=' ';
					s3[j]='\0';
					len3=strlen(p[i]);
					a=len3-j-len1+1;
					b=len2-len1;
					for(k=0;k<(len3+b);k++)
					{

						if(k<len2)
							p[i][a++]=s1[k];
						else
							p[i][a++]=s3[k-len2];
					}
				}
				i++;
			}
		}
	}
}
