#include <bits/stdc++.h>
using namespace std;
const long long p=1000000007;
long long fp(long long a,long long b)
{
    long long ans=1;
    a%=p;
    while(b)
    {
        if(b&1)
        {
            ans=ans*a%p;
        }
        a=a*a%p;
        b=b>>1;
    }
    return ans%p;
}
int main()
{
    long long x,y;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>x>>y;
        cout<<fp(x,y)<<endl;
    }
    return 0;
}
