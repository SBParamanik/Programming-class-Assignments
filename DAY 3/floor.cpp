#include <stdio.h>
#include <math.h>

int main()
{
    float number, floorValue, ceilValue;
    printf("Enter a number: ");
    scanf("%f", &number);
    floorValue = floor(number);
    ceilValue = ceil(number);
    printf("The floor value  is: %.2f\n",floorValue);
    printf("The ceiling value is: %.2f\n",ceilValue);
	return 0;
}
