/*Write a program that checks whether a number is a perfect number or not.
Display all perfect numbers between 1 and 1000.*/
#include <stdio.h>
int perfect(int);
int main()
{
    for(int i=1;i<=1000;i++)
    {
        int res = perfect(i);
        if(res!=0)
        {
            printf("%d is perfect number\n",res);
        }

    }
    return 0;
}
int perfect(int n)
{
    int sum=0;
    for(int i=1;i<=n-1;i++)
    {
        if(n%i==0)
        {
          sum+=i;  
        }
    }
    if(sum==n)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
// #include <stdio.h>

// int perfect(int);

// int main()
// {
//     for(int i = 1; i <= 1000; i++)
//     {
//         if(perfect(i))
//         {
//             printf("%d is a perfect number\n", i);
//         }
//     }
//     return 0;
// }

// int perfect(int n)
// {
//     int sum = 0;

//     for(int i = 1; i <= n / 2; i++)
//     {
//         if(n % i == 0)
//         {
//             sum += i;
//         }
//     }

//     if(sum == n)
//         return 1;
//     else
//         return 0;
// }