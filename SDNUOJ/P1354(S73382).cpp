#include <bits/stdc++.h>

using namespace std;
const int INF=0x7fffffff;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a>b)
        return gcd(a%b,b);
    return gcd(a,b%a);
}
int a[105];
int main()
{
    int n;
    cin>>n;
    int t=INF;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=1; i<n; i++)
    {
        if(t>=gcd(a[i],a[i+1]))
            t=gcd(a[i],a[i+1]);
    }
     for(int i=1; i<=n; i++)
     {
         ans+=a[i]/t;
     }
     cout<<t<<endl<<ans<<endl;
    return 0;
}
