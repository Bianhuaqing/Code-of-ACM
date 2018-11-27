#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int dp[1005];
int w[1005];
int main()
{
    int m,n;
    memset(dp,0,sizeof(dp));
    scanf("%d%d",&m,&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&w[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=m;j>=w[i];j--){
            dp[j]=max(dp[j],(dp[j-w[i]]+w[i]));
        }
    }
    cout<<(m-dp[m])<<'\n';
    return 0;
}

