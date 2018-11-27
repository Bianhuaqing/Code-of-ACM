#include <iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;


int a[2001];


int main()
{
    ios::sync_with_stdio(false);
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=0;
    int t=0;
    sort(a+1,a+n+1);
    int i=1;
   // t=a[i];
    while(t<=m&&i<=n){
        t+=a[i];
        i++;
        ans++;
    }
    if(i==n+1) cout<<n<<endl;
    else cout<<ans-1<<endl;
    return 0;
}
