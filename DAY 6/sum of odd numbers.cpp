#include <stdio.h>
int main()
{
	int s=0,i;
	for(i=1;i<=20;i+=2)
	{
		s=s+i;
	}
	printf("sum of first 10 odd number is :%d",s);
	return 0;
}
