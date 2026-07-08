#include <stdio.h>
int largest(int,int,int,int,int);
int main()
{
    int num1,num2,num3,num4,num5;
    printf("Enter 1 number: "), scanf("%d", &num1);
    printf("Enter 2 number: "), scanf("%d", &num2);
    printf("Enter 3 number: "), scanf("%d", &num3);
    printf("Enter 4 number: "), scanf("%d", &num4);
    printf("Enter 5 number: "), scanf("%d", &num5);
    int lar = largest(num1,num2,num3,num4,num5);
    printf("Largest number is %d",lar);
    return 0;
}
int largest(int n1,int n2,int n3, int n4,int n5)
{
    int lar=n1;
    int num;
    if(lar<n2)
    lar=n2;
    if(lar<n3)
    lar=n3;
    if(lar<n4)
    lar=n4;
    if(lar<n5)
    lar=n5;
    return lar;

}