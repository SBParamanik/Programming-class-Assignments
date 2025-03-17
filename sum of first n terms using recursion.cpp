#include <stdio.h>
int sum(int n)
{
    if(n!=0)
	   return n+sum(n-1);
	else 
	   return n;
}
int main()
{
	int a;
	printf("enter the number of terms:");
	scanf("%d",&a);
	printf("sum of first %d numbers is :%d",a,sum(a));
	return 0;
}

