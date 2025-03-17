#include <stdio.h>
int gcd(int m,int n)
{
    if(n!=0)
	   return gcd(n,m%n);
	else 
	   return m;
}
int main()
{
	int a,b;
	printf("Enter the 1st number :");
	scanf("%d",&a);
	printf("Enter the 2nd number :");
	scanf("%d",&b);
	printf("The GCD of the given numbers is: %d",gcd(a,b));
	return 0;
}

