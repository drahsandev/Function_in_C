//Write a function to find the largest of three numbers.
#include <stdio.h>
int largest(int,int,int);
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    int res = largest(n1,n2,n3);
    printf("The largest number is: %d",res);
     
    return 0;
}
int largest(int s1,int s2,int s3)
{
    int largest=0;
    if(s1>s2)
    largest=s1;
    else
    largest=s2;
    if(largest>s3)
    {

    }
    else
    largest = s3;
    return largest;
     
}