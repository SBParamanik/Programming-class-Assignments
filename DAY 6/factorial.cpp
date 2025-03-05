#include <stdio.h>
int main()
{
	int i,n,f;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Factorial of the number:%d",f);
	return 0;
}
