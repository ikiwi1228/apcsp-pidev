#include <stdio.h>

void area_(double radius, double *area);

int main(void)
{
    double radius, area;

    printf("Please enter two number values for the radius of the circle:\n ");
    scanf("%lf", &radius);
    area_(radius, &area);
    printf("Area of circle : %0.4f\n", area);
    return 0;
}

void area_(double radius, double *area)
{
    double PIE = 3.1416;
    *area = PIE * radius * radius;
}
