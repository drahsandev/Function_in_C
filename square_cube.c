#include <stdio.h>
void square(int);
void cube(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    square(num);
    cube(num);
    return 0;
}
void square(int var)
{
    int square=(var*var);
    printf("Square of %d is equal to = %d.\n",var,square);
}
void cube(int res)
{
    int cube=(res*res*res);
     printf("Cube of %d is equal to = %d.\n",res,cube);
}