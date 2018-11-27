#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    long long a,b;
    long long d;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        d=a+b;
        if(a==0&&b==0){
            continue;
        }
        else printf("%lld\n",d);    
    
    }
    return 0;
}