#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,ans=0;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a==0)
        printf("0\n");
    else
    {
        long long t=b;
        for(long long i=0; i<a; i++)
        {

            ans=ans+t;
            t*=c;
            //printf("%lld %lld\n",i,ans);
        }
         printf("%lld\n",ans);
    }
    return 0;
}
