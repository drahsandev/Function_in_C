#include <stdio.h>
void compute(float);
int main()
{
    float radius,d,a,p;
    scanf("%f",&radius);
    compute(radius,&d,&a,&a);
    printf("Area of Cirlce: %.2f",a);
     printf("Diameter of Cirlce: %.2f",d);
      printf("Parameter of Cirlce: %.2f",p);

    return 0;
}