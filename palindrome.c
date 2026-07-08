#include <stdio.h>
int palindrome(int);
int main()
{
    int num;
    printf("Enter number: "), scanf("%d", &num);
    int check=palindrome(num);
    if(check==num)
    {
        printf("%d is palindrome.",check);
    }
    else
    printf("%d is not palindrome.",check);
    return 0;
}
int palindrome(int var)
{
     int rev=0;
    while(var>0)
    {
       
        int digit=var%10;
        rev=rev*10+digit;
        var=var/10;
    }
    return rev;
}