#include <iostream>
#include<bits/stdc++.h>

using namespace std;
const int mod=10007;
int f[4];
int main()
{
    int n;
    cin>>n;
    f[1]=f[2]=1;
    if(n>=3)
    {
        for(int i=3; i<=n; i++)
        {
            int t=(f[1]%mod+f[2]%mod)%mod;
            f[1]=f[2];
            f[2]=t;
        }
        cout<<f[2]<<endl;
    }
    else cout<<'1'<<endl;
    return 0;
}
