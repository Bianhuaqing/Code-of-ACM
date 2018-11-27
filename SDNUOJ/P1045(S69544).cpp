#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int INF=0x7fffffff;
int st[205],sum[205],dp[205][205];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&st[i]);
        dp[i][i]=0;
        sum[i]=st[i]+sum[i-1];
    }
    for(int r=1;r<n;r++){
        for(int i=1;i<n;i++){
            int j=i+r;
            if(j>n) break;
            dp[i][j]=INF;
            for(int k=i;k<=j;k++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]);
            }
            dp[i][j]+=sum[j]-sum[i-1];
        }
    }
    cout<<dp[1][n];
    return 0;
}
