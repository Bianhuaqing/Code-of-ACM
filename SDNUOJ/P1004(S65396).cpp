#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0){
        int ans=0;
            for(int i=1;i<=n;i++){
            int a;
            scanf("%d",&a);
            ans+=a;
        }
        if(n!=0) printf("%d\n",ans);
        
    }
}