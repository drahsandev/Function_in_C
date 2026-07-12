#include <stdio.h>
void swap(int*,int*);
int main()
{
    int x, y;
    printf("Enter two numbers to swap\n");
    scanf("%d %d",&x,&y);
    printf("Before Swap x=%d and y=%d\n",x,y);
    swap(&x,&y);
    printf("After swap x=%d and y=%d\n",x,y);
    return 0;
}
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
     return;
}
