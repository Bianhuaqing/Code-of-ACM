#include <bits/stdc++.h>

using namespace std;

long long fp(long long a,long long b,long long c)
{
    long long ans=1;
    a=a%c;
    while(b)
    {
        if(b&1)
        {
            ans=ans*a%c;
        }
        a=a*a%c;
        b>>=1;
    }
    return ans;
}
int main()
{
    long long x,y,z;
    while(scanf("%lld%lld%lld",&x,&y,&z)!=EOF)
    {
        cout<<fp(x,y,z)<<'\n';
    }
    return 0;
}
