#include <stdio.h>
int ss(int n);
int main()
{
	int a;
	printf("enter the number n = ");
	scanf("%d",&a);
	printf("sum of squares of first %d natural number is :%d",a,ss(a));
	return 0;
}
int ss(int x)
{

 int i,ss=0;
 for(i=1;i<=x;i++)
 {
 	ss= ss+i*i;
 }
 return ss;
}

