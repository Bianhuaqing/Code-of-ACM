#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const int INF=0;
char a[105];
int main()
{
    memset(a,0,sizeof(a));
    while(gets(a))
    {
        if(a[0]!='\0'){
            int l=strlen(a);
            int ans=INF;
            int t=1;
            int tt=-1;
            for(int i=0;i<l;i++){
                if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
                {
                    if(t>ans) ans=t;
                    t=1;
                    tt=i;
                }
                else t++;
            }

            cout<<max(l-tt,ans)<<'\n';
            memset(a,0,sizeof(a));
        }
    }
    return 0;
}
