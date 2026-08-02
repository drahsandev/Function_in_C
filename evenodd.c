#include <stdio.h>
int evenodd(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int res = evenodd(num);
    if(res==1)
    {
        printf("%d is Even",num);
    }
    else
    {
        printf("%d is Odd",num);
    }
    return 0;
}
int evenodd(int s)
{
    if(s%2==0)
    return 1;
    else
    return 0;
}