#include<stdio.h>
void calodd(int );
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    calodd(a);
}

void calodd(int a)
{
    for(int i=1;i<=a;i++)
        printf("%d ",i*2-1);
}