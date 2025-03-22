#include"header.h"
char **p;
void main(int argv , char ** argc)
{
	if(argv!=2)
	{
		printf("USEAR ./a.out file name \n");
		return;
	}

	FILE *sf,*df;
	int l=0,i,ind;

	sf=fopen(argc[1],"r");
	df=fopen("data.i","w");

	line(sf,&l);

	header_file(sf,df,l);

	com(l);

	macros(l);

	for(i=0;i<l;i++)
	{
		if(strstr(p[i],"main"))
		{
			while(i<l)
			{
				fputs(p[i],df);
				i++;
			}
		}
	}
}


void line(FILE *fp,int *l)
{
	int i=0,c=0;
	char ch;

	while((ch=fgetc(fp))!=EOF)
	{
		i++;
		if(ch=='\n')
		{
			(*l)++;
			if(i>c)
				c=i;
			i=0;
		}
	}
	rewind(fp);
	p=malloc(sizeof( char *)*(*l));
	for(i=0;i<*l;i++)
	{
		p[i]=malloc(sizeof(char)*c+1);
		fgets(p[i],c+1,fp);
	}
	rewind(fp);
}
