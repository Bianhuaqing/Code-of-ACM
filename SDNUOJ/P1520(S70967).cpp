#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int dp[1005];
int C;
int w[105];
int v[105];
int c[105];
int m,n;
int main()
{
    scanf("%d",&C);
    while(C--){
        memset(dp,0,sizeof(dp));
        memset(w,0,sizeof(w));
        memset(v,0,sizeof(v));
        memset(c,0,sizeof(c));
        scanf("%d%d",&m,&n);
        for(int i=1;i<=n;i++){
            scanf("%d%d%d",&w[i],&v[i],&c[i]);
        }
        for(int i=1;i<=n;i++){
            for(int j=m;j>=0;j--){
                for(int k=1;k<=c[i];k++){
                        if((j-k*w[i])<0) break;
                    dp[j]=max(dp[j],dp[j-w[i]*k]+v[i]*k);
                }
            }
        }
        printf("%d\n",dp[m]);
    }
    return 0;
}
