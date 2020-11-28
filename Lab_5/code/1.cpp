#include <cstdlib>
#include <stdio.h>
#include <math.h>
void dbl(double a, double b)
{
	double f;
	double buffer = a + b;
	buffer = buffer * buffer;
	f = buffer;
	buffer = a * a;
	f = f - buffer;
	buffer = 2.0*a*b;
	f = f - buffer;
	buffer = b * b;
	f = f / buffer;
	printf("Double = %.32f\n", f);
}
void flt(float a, float b)
{
	float f;
	float buffer = a + b;
	buffer = buffer * buffer;
	f = buffer;
	buffer = a * a;
	f = f - buffer;
	buffer = 2.0f*a*b;
	f = f - buffer;
	buffer = b * b;
	f = f / buffer;
	printf("Float = %.32f\n", f);
}


int main(void)
{
	float fa = 95.0f;
	float fb = 0.01f;
	double da = 95.0;
	double db = 0.01;

	float fb2 = 1.0f;
	double db2 = 1.0;
	
	flt(fa, fb);
	dbl(da, db);


	flt(fa, fb2);

	dbl(da, db2);

	system("Pause");
	return 0;
}