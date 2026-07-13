#include <stdio.h>
void compute(float,float*,float*,float*);
int main()
{
    float radius, diameter, parameter, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    compute(radius, &diameter, &parameter, &area);
}
void compute(float radius, float *diameter, float *parameter, float *area)
{
    *diameter = 2*radius;
    *parameter = 2*3.14*radius;
    *area = 3.14*radius*radius;
    printf("Diameter: %.2f\n", *diameter);
    printf("Parameter: %.2f\n", *parameter);
    printf("Area: %.2f\n", *area);
}