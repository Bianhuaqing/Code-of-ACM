#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        else{
            long long ans=0;
            for(int i=1;i<=n;i++){
                int t;
                cin>>t;
                ans+=(t*t);
            }
            cout<<ans<<endl;
            ans=0;
        }
    }
    return 0;
}
