#include <iostream>
#include<bits/stdc++.h>
#include<queue>

using namespace std;

struct step
{
    int x;
    int y;
    int s;
};

queue <step> q;
int x,y,m,n;
int vis[105][105];
bool flag=false;
bool judge(int a,int b)
{
    if(a<1||a>100||b<1||b>100||vis[a][b]==1)
    {
        return false;
    }
    return true;
}
const int dx[9]= {2,2,-2,-2,1,1,-1,-1};
const int dy[9]= {1,-1,1,-1,2,-2,2,-2};
void bfs()
{
    if(q.back().x== m&&q.back().y==n)
    {
        flag=true;
        return;
    }
    while(q.empty()==false)
    {
        if(q.back().s==4)
        {
            break;
        }
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                int xx=q.front().x+dx[i];
                int yy=q.front().y+dy[j];
                if(judge(xx,yy))
                {
                    if(q.front().x==m&&q.front().y==n)
                    {
                        flag=true;
                        break;
                    }
                    else
                    {
                        vis[xx][yy]=1;
                        step tt;
                        tt.x=xx;
                        tt.y=yy;
                        tt.s=q.front().s+1;
                        q.push(tt);
                    }


                }
            }
        }
        if(flag==true)
        {
            break;
        }
        q.pop();
        bfs();
    }
}

int main()
{
    struct step t;
    memset(vis,0,sizeof(vis));
    scanf("%d%d",&t.x,&t.y);
    scanf("%d%d",&m,&n);
    t.s=0;
    q.push(t);
    bfs();
    if(flag)
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
