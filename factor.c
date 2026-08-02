/*Write a program that displays all factors of a given number.
Display the factors of all numbers from 1 to 50.*/
#include <stdio.h>
void factor(int);
int main()
{
    for(int i=1;i<=50;i++)
    {
factor(i);
    }
    return 0;
}
void factor(int n)
{
    printf("%d has factors: ", n);
    for(int i=1;i<=n;i++)
    {
        
        if(n%i==0)
        {
            printf("%d ",i);
        }
        
    }
    printf("\n");
    return;
}