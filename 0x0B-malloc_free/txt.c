#include <stdio.h>


float* biggest_float(float *float1, float* float2)
{
	float *biggest;

	if (*float1 > *float2)
	{
		biggest = float1;
	}
	else 
	{
		biggest = float2;
	}
	return biggest;
}
int main(void)
{
	float x = 10.0;
	float y = 20.0;

	printf("y: %p", &y);

	float *b = biggest_float(&x,&y);
	printf("b: %p", b);
	return (0);
}
