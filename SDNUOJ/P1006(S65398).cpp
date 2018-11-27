#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans=0;
            for(int i=1;i<=n;i++){
            int a;
            scanf("%d",&a);
            ans+=a;
        }
        printf("%d\n",ans);
    }
    return 0;
}