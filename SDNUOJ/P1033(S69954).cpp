#include <iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<map>
#include<set>
using namespace std;
int ans[1005];
int main()
{
    int T,M;
    int t,v;
    scanf("%d%d",&T,&M);
    for(int i=1;i<=M;i++){
        scanf("%d%d",&t,&v);
        for(int j=T;j>=t;j--){
            ans[j]=max(ans[j],ans[j-t]+v);
        }
    }
    cout<<ans[T]<<endl;

    return 0;
}
