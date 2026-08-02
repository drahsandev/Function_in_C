//Write a program that checks whether a number is prime or not and display all prime numbers between 1 and 100.
#include <stdio.h>
int prime(int);
int main()
{
    for(int i=1;i<=100;i++)
    {
        int res=prime(i);
        if(res!=0)
        printf("%d is prime number.\n",res);
    }
    return 0;
}
int prime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    int count=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        return n;
    }
    else
    return 0;
}