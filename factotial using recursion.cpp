#include <stdio.h>
int f(int n)
{
    if(n!=0)
	   return n*f(n-1);
	else 
	   return 1;
}
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	printf("the factorial of the number is :%d",f(a));
	return 0;
}

