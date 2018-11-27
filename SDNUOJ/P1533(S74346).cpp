#include <bits/stdc++.h>
#include <iomanip>
#include <map>

using namespace std;

int n,m;
const int maxn=1005;
string lt[maxn];
int a[maxn];
map<int,bool> qy;
int main()
{
    while(cin>>n>>m)
    {
        for(int i=1;i<=n;i++)
        {
            qy[i]=1;
        }
        for(int i=1;i<=m;i++)
        {
            cin>>a[i]>>lt[i];
        }
        qy[a[1]]=0;
        for(int i=2;i<=m;i++){
            if(lt[i]!=lt[i-1]){
                qy[a[i]]=0;
            }
        }
        bool fl=0;
        for(int i=1;i<=n;i++){
            if(!qy[i]) continue;
            if(fl) cout<<' ';
            fl=1;
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
