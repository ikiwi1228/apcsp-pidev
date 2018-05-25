#include <stdio.h>
int main()
{
	double radius(double r)
		{
			double area;
			area = r*r*(3.14);
		}
	for (double i=3.5; i <= 12.5; i++)
		{
			printf("The area of a circle with radius of %8.2f is %8.2f\n",i, radius(i));
		}
}
