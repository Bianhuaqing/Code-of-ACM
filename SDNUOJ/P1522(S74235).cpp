#include <bits/stdc++.h>

using namespace std;
const int maxn=1000001;
bool is[1000005];
int prime[1000005];
int shu[1000005];
int tot=0;
//void is_prime()
//{
//    memset(is,1,sizeof(is));
//    memset(prime,0,sizeof(prime));
//    is[0]=is[1]=0;
//    for(int i=2; i<maxn; i++)
//    {
//        if(is[i])
//        {
//            prime[++tot]=i;
//        }
//        for(int j=1;j<=tot&&prime[j]*i<maxn;j++)
//        {
//            is[prime[j]*i]=0;
//            if(i%prime[j]==0)
//            {
//                shu[i]=j;
//                //break;
//            }
//        }
//    }
//}
void Eratosthenes(){
    tot=0;
    memset(is,1,sizeof(is));
    is[0]=is[1]=0;
        for(int i=2;i<maxn;i++){
            if(is[i]){
                prime[++tot]=i;
                shu[i]=tot;
                for(int j=i+i;j<maxn;j+=i){
                    is[j]=0;
                    shu[j]=tot;
                }
            }
        }
        return;
}
//void work()
//{
//    shu[0]=shu[1]=0;
//    for(int i=2;i<maxn;i++)
//    {
//        for(int j=1;j<maxn&&prime[j]<i;j++){
//            if(i%prime[j]==0)
//            {
//                shu[i]=j;
//            }
//        }
//    }
//    return;
//}
int main()
{
    Eratosthenes();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",shu[n]);
    }
    return 0;
}
