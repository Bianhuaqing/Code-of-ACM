#include <iostream>
#include<bits/stdc++.h>

using namespace std;
char aa[105],bb[105];
int a[105];
int b[105];
int ans[105];
int main()
{
    memset(aa,0,sizeof(aa));
    memset(bb,0,sizeof(bb));
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    while(cin>>aa>>bb)
    {

        int la=strlen(aa);
        int lb=strlen(bb);
        for(int i=0; i<la; i++)
        {
            a[i]=aa[i]-'0';
        }
        for(int i=0; i<lb; i++)
        {
            b[i]=bb[i]-'0';
        }
        int l=0;
        //int t=min(la,lb);
        for(int i=1;i<=min(la,lb);i++){
            ans[l]=ans[l]+a[la-i]+b[lb-i];
            if(ans[l]>=10){
                ans[l]=ans[l]%10;
                ans[l+1]++;
                l++;
            }
            else l++;
        }
        //l--;
        if(la>=lb){
            for(int i=min(la,lb)+1;i<=max(la,lb);i++){
            ans[l]+=a[la-i];
            if(ans[l]>=10){
                ans[l]=ans[l]%10;
                ans[l+1]++;
                l++;
            }
            else l++;

        }
        if(ans[l]==0)
        l--;
        for(int i=l;i>=0;i--){
            cout<<ans[i];
        }
        cout<<endl;
        }
        else{
            for(int i=min(la,lb)+1;i<=max(la,lb);i++){
            ans[l]+=b[la-i];
            if(ans[l]>=10){
                ans[l]=ans[l]%10;
                ans[l+1]++;
                l++;
            }
            else l++;
        }
        if(ans[l]==0)
        l--;
        //if(a[l+1])
        for(int i=l;i>=0;i--){
            cout<<ans[i];
        }
        cout<<endl;
    }
    memset(aa,0,sizeof(aa));
    memset(bb,0,sizeof(bb));
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
     memset(ans,0,sizeof(ans));
    }
    return 0;
}
