#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int L[10005];
int main()
{
    int l,M;
    cin>>l>>M;
    for(int i=0;i<=l;i++){
        L[i]=1;
    }
    for(int i=1;i<=M;i++){
        int t1,t2;
        cin>>t1>>t2;
        for(int j=t1;j<=t2;j++){
            L[j]=0;
        }
    }
    int ans=0;
    for(int i=0;i<=l;i++){
        if(L[i]==1) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
