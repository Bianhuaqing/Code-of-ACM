#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        int m,x;
        int ans=0;
        cin>>m>>x;
        for(int j=1;j<=m;j++){
            int t;
            cin>>t;
            if(t>x) ans++;
        }
        cout<<"Case "<<i<<":"<<ans<<endl<<endl;
    }
    return 0;
}
