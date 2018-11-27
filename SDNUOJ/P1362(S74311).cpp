#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
long long l[100005];
long long r[100005];
long long ll,rr;
//long long t[100005];
long long m[100005];
int main()
{
    int n;
    while(cin>>n){
            ll=0;
            rr=0;
        for(int i=1;i<=n;i++){
            scanf("%lld%lld",&l[i],&r[i]);
            ll+=l[i];
            rr+=r[i];
        }
        //cout<<ll<<" "<<rr<<endl;
        m[0]=(ll-rr)>0?(ll-rr):-(ll-rr);
        //t[0]=0;
        for(int i=1;i<=n;i++){
            int nl=ll-l[i]+r[i];
            int nr=rr-r[i]+l[i];
            m[i]=(nl-nr)>0?(nl-nr):-(nl-nr);
        }
        int ans=0;
        int ttt=m[0];
        for(int i=0;i<=n;i++){
            if(m[i]>ttt){
                ttt=m[i];
                ans=i;
            }
        }
//         for(int i=0;i<=n;i++){
//            cout<<m[i]<<" ";
//         }

        cout<<ans<<endl;

        memset(l,0,sizeof(l));
        memset(r,0,sizeof(r));
        memset(m,0,sizeof(m));
    }
    return 0;
}
