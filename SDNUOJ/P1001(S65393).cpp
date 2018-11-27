#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    long long a,b;
    long long d;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        d=(long long)a+b;
        printf("%lld\n",d);
    }
    return 0;
}