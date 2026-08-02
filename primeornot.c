//Write a function that checks whether a number is prime or not
#include <stdio.h>
int prime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int res = prime(n);
    if(res==1)
    {
        printf("%d is prime.",n);
    }
    else
    {
        printf("%d is  not prime",n);
    }
    return 0;
}
int prime(int s)
{
    int dc=0;
    for(int i=2;i<=s;i++)
    {
        if(s%i==0)
        {
            dc++;
        }
    }
    if(dc==1 || s==1)
    return 1;
    return 0;
}