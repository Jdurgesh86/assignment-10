#include<stdio.h>
float areacircle(int);
int main()
{
    int radius;
    float a;
    printf("Enter radius of circle ");
    scanf("%d",&radius);
    a=areacircle(radius);
    printf("The area of circle is %f",a);
}

float areacircle(int rad)
{
    return 3.14*rad*rad;
}