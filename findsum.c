#include <stdio.h>
int isprime(int);
int main()
{
    int sum=0;
    for(int i=1;i<=500;i++)
    {
        int prime=isprime(i);
        if(prime==1)
        {
            sum+=i;
        }


    }
    printf("Sum of First 1_500 prime number is: %d",sum);
     
    
    return 0;
}
int isprime(int var)
{
    int dc=0;
    for(int i=1;i<=var;i++)
    {
        if(var%i==0)
        dc++;
    }
    if(dc==2)
    return 1;
}