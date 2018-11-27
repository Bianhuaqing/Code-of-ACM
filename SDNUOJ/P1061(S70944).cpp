#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int dp[105][105];
int w1[105];
int w2[105];
int v[105];
int m,t,n;
int main()
{
    scanf("%d%d%d",&m,&t,&n);
    memset(dp,0,sizeof(dp));
    memset(w1,0,sizeof(w1));
    memset(w2,0,sizeof(w2));
    memset(v,0,sizeof(v));
    for(int i=1;i<=n;i++){
        scanf("%d%d%d",&w1[i],&w2[i],&v[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=m;j>=w1[i];j--){
            for(int k=t;k>=w2[i];k--){
                dp[j][k]=max(dp[j][k],dp[j-w1[i]][k-w2[i]]+v[i]);
            }
        }
    }
    printf("%d\n",dp[m][t]);
    return 0;
}
