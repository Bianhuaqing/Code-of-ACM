#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int isprime (int n)
{
    int flag,i;
    flag=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF){
        int ans=0;
    for(int i=1;i<=x;i++){
        int t;
        scanf("%d",&t);
        if(isprime(t)) ans++;
    }
    printf("%d\n",ans);
    }
    return 0;
}
