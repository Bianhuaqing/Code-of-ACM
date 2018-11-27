#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/*int tu[10001][10001];
const int zong={-1,-1,-1,0,0,1,1,1};
const int heng={-1,0,1,-1,1,-1,0,1};
int main(){
    //memset(tu,0,sizeof(tu));
    int n;
    while(scanf("%d",&n)!=EOF){
        memset(tu,0,sizeof(tu));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                tu[i][j]=1;
            }
        }//Build the map;
        int a=1;
        
    }
    return 0;
}*/
int main(){
    int n;
    scanf("%d",&n);
    long long a,b;
    long long d;
    for(int i=1;i<=n;i++){
        scanf("%lld%lld",&a,&b);
        d=(long long)a+b;
        printf("%lld\n",d);
    }
    return 0;
}