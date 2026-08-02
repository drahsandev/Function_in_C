/*Write a program that checks whether a number is a strong number or not.
Display all strong numbers between 1 and 1000.*/
#include <stdio.h>
int strong(int);
int main()
{
    for(int i=1;i<=1000;i++)
    {
        if(strong(i))
        {
            printf("%d is strong number\n",i);
        }

    }
    return 0;
}
int strong(int n)
{
    int temp=n;
    int sum=0;
    while(temp>0)
    {

        int digit = temp%10;
        int fact=1;
        for(int i=1;i<=digit;i++)
        {
            fact*=i;
        }
        sum+=fact;
        temp/=10;


    }
    if(n==sum)
    return 1;
    return 0;
}