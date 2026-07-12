#include <stdio.h>
void swap(int , int);
int main ()
{
    int x=10, y=20;
    printf("Before Swap x=%d and y=%d\n",x,y);
    swap(x,y);
    return 0;
}
void swap(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("After swap x=%d and y=%d\n",x,y);
}