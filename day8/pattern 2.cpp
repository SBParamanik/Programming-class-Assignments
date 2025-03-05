#include <stdio.h>
int main()
{
	char i,j,k,c='a';
	for(i=1;i<=4;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
