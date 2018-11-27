#include <bits/stdc++.h>

using namespace std;

//bool a[105][105];
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int ans=0;
        cin>>n>>m;
//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=m;j++){
//                cin>>a[i][j];
//                if
//
//            }
//        }
        for(int i=1;i<=n*m;i++){
            int tt;
            cin>>tt;
            if(tt==1) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
