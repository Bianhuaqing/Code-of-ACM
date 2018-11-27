#include <bits/stdc++.h>

using namespace std;

long long f[1000005];
int main()
{
    f[0]=7;
    f[1]=11;
    for(int i=2;i<=1000000;i++)
    {
        //f[i]=f[i-1]+f[i-2];
        f[i-1]%=3;
        f[i-2]%=3;
        f[i]=(f[i-1]+f[i-2])%3;
    }
    int n;
    while(cin>>n){
        if(f[n]==0){
            cout<<"yes"<<'\n';
        }
        else cout<<"no"<<'\n';
    }
    return 0;
}
