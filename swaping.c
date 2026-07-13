 #include <stdio.h>
 void swap(int *a,int *b,int *c)
 {
    int temp=*a;// Left swaping;
    *a=*b;
    *b=*c;
    *c=temp;

 }
 int main()
 {
    int a=10, b=20, c=30;
    printf("After swap a=%d b=%d c=%d\n",a,b,c);
    swap(&a,&b,&c);
    printf("Before swap a=%d b=%d c=%d\n",a,b,c);
    return 0;
 }