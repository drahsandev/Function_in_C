/*Write a program that checks whether a given number is an Armstrong number or not.
Extend the program to display all Armstrong numbers between 1 and 1000.*/
#include <stdio.h>
#include <math.h>
int armstrong(int);
int main()
{
    for(int i=1;i<=1000;i++)
    {
        int res=armstrong(i);
        if(res==1)
        printf("%d ",i);
    }
    return 0;
}
int armstrong(int s)
{
    int count=0;
    int sum=0;
    int temp=s;
    for(int i=1;temp>0;i++)
    {
        temp=temp/10;
        count++;
    }
    temp=s;
    for(int j=1;temp>0;j++)
    {
        int digit=temp%10;
        sum+=(int)pow(digit,count);
        temp=temp/10;
    }
     
    if(sum==s)
    {
        return 1;
    }
    return 0;

}