#include<stdio.h>
#define ll long long int
ll fact(ll);
ll combination(ll ,ll);
int main()
{
    ll n,r,c;
    printf("Enter the items and selected r at time ");
    scanf("%lld%lld",&n,&r);
    c=combination(n,r);
    printf("The combination is %lld ",c);
}

ll combination(ll n,ll r)
{
    return fact(n)/(fact(n-r)*fact(r));
}

ll fact(ll num)
{
    // Base condition
    if(num == 0) 
        return 1;
    else
        return num * fact(num - 1);
}