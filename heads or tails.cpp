#include <stdio.h>
int main()
{
	char n;	
	printf("enter the char h or t in lower case: ");
	scanf("%c",&n);
	if(n=='h')
	{
		printf("its heads",n);
	}
	else
	{
		printf("its tails",n);
	}
	return 0;
}
