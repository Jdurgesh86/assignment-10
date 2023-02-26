#include<stdio.h>
#define ll long long int
ll fact(ll);
ll permutation(ll ,ll);
int main()
{
    ll n,r,c;
    printf("Enter the items and selected r at time ");
    scanf("%lld%lld",&n,&r);
    c=permutation(n,r);
    printf("The permutation is %lld ",c);
}

ll permutation(ll n,ll r)
{
    return fact(n)/(fact(n-r));
}

ll fact(ll num)
{
    // Base condition
    if(num == 0) 
        return 1;
    else
        return num * fact(num - 1);
}