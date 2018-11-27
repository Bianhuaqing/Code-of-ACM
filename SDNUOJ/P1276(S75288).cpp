#include <bits/stdc++.h>

using namespace std;

const int INF=0x7fffffff;
struct jizhi
{
    int x;
    int y;
    int sg;
}minn,maxn;

int ren[105][105];
int main()
{
    int n ,m;
    cin >> n >> m;
    minn.sg=INF;
    maxn.sg=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&ren[i][j]);
            if(ren[i][j]>maxn.sg)
            {
                maxn.x=i;
                maxn.y=j;
                maxn.sg=ren[i][j];
            }
            if(ren[i][j]<minn.sg)
            {
                minn.x=i;
                minn.y=j;
                minn.sg=ren[i][j];
            }
        }
    }
    int tcx=min(minn.x,maxn.x);
    int tcy=min(maxn.y,minn.y);
    int tex=max(minn.x,maxn.x);
    int tey=max(maxn.y,minn.y);
    int ans=0;
    for(int i=tcx;i<=tex;i++)
    {
        for(int j=tcy;j<=tey;j++)
        {
            ans+=ren[i][j];
        }
    }
    cout<<ans<<'\n';
    return 0;
}
