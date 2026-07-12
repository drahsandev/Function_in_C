#include <stdio.h>
void prime(int);
int main()
{
    for(int i=1;i<=500;i++)
    {
        prime(i);
        
    }
    return 0;
}
void prime(int var)
{
    int count=0;
    for(int i=1;i<=var;i++)
    {
        if(var%i==0)
        count++;
    }
    if(count==2)
    printf("%d is prime number.\n",var);
}