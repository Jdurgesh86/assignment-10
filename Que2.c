#include<stdio.h>
int evenodd(int );
int main()
{
    int a,test;
    printf("Enter a number ");
    scanf("%d",&a);
    test=evenodd(a);
    if(test)
        printf("Number is even ");
    else
        printf("Number is odd");
}
int evenodd(int a)
{
    if(a%2==0)
        return 1;
    return 0;
}