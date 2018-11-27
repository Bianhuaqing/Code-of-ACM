#include <bits/stdc++.h>

using namespace std;
int a[102];

int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<'1'<<endl;
    }
    else
    {
        long long t1=1;
        long long t2=n*n;
        for(long long i=n; i>1; i--)
        {
            t1*=i;
        }
        t1+=t2;
        int i=0;
        while(t1){
            a[i]=t1%10;
            t1/=10;
            i++;
        }
        i--;
        int ans=0;
        for(i;i>=0;i--){
            ans+=a[i];
        }
        cout<<ans%10<<endl;
    }
    return 0;
}
