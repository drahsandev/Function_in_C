#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sq=pow(n,2);
    printf("Square of %d is %d\n",n,sq);
    int cub=pow(n,3);
    printf("cube of %d is %d\n",n,cub);
    return 0;
}