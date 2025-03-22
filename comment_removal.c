#include"header.h"

void com(int l)
{
	int i,j;
	for(i=0;i<l;i++)
	{
		for(j=0;p[i][j]!='\n';j++)
		{
			if(p[i][j]=='/')
			{
				if(p[i][j+1]=='/')
				{
					for(j=j;p[i][j]!='\n';j++)
						p[i][j]=' ';
				}
				else if(p[i][j+1]=='*')
				{
					for(j=j+2;p[i][j]!='*';j++)
					{
						p[i][j]=' ';
						if(p[i][j]=='\n')
							i++,j=0;
						if(p[i][j+1]=='/')
							break;
					}
				}
			}
		}
	}
}
