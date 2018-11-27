#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const double pi=acos(-1.0);
struct pizza
{
    int size;
    int money;
    double per;
} p[15];
double S(int q)
{
    double r=(double)q/2;
    return pi*r*r;
}
bool cmp(pizza a,pizza b)
{
    if(a.per<=b.per)
        return true;
    return false;
}
int main()
{
    int n;
    int t=0;
    while(scanf("%d",&n)!=EOF)
    {
        t++;
        if(n==0)
            break;
        else
        {
            for(int i=0; i<n; i++)
            {
                scanf("%d%d",&p[i].size,&p[i].money);
                p[i].per=p[i].money*1.0/S(p[i].size);
            }
            sort(p,p+n,cmp);
            printf("Menu %d: %d\n",t,p[0].size);
        }
    }
    return 0;
}
