#include<bits/stdc++.h>
using namespace std;
int ans[1005];
int t[1005];
int v[1005];
int main()
{
    int T,M;
    scanf("%d%d",&T,&M);
    for(int i=1;i<=M;i++){
        scanf("%d%d",&t[i],&v[i]);
    }
    for(int i=1;i<=M;i++){
        for(int j=t[i];j<=T;j++){
            ans[j]=max(ans[j],ans[j-t[i]]+v[i]);
        }
    }
    cout<<ans[T]<<endl;

    return 0;
}