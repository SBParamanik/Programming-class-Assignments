#include <stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while (n!=0)
	{
		s++;
		n=n/10;
	}
	printf("%d digits are present in the number",s);
	return 0;
}
