#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
long long ans[100005];

int main()
{
    ios::sync_with_stdio(false);
    long long n;
    while(cin>>n)
    {
        memset(ans,0,sizeof(ans));
        ans[1]=1;
        ans[2]=2;
        ans[3]=4;
        if(n==1||n==2||n==3)
        {
            cout<<ans[n]<<endl;
        }
        else
        {
            for(int i=4; i<=n; i++)
            {
                ans[i]=(ans[i-1]%1000000007+ans[i-2]%1000000007+ans[i-3]%1000000007)%1000000007;
            }
            cout<<ans[n]%1000000007<<endl;
        }
    }
    return 0;
}
