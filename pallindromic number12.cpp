#include <stdio.h>
int main()
{
	int n,m,rev=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	m=n;
	while (n!=0)
	{
		rev=rev*10+(n%10);
		n=n/10;
	}
	if(rev==m)
	{
		printf("the number is a pallindrome");
	}
	else
	{
	   printf("the number is not a pallindrome");	
	}
	return 0;
}
