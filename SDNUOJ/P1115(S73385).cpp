#include <bits/stdc++.h>

using namespace std;

struct people{
    string name;
    int qm;
    int bj;
    char gb;
    char xb;
    int lw;
    int money=0;
    int cx;
}p[105];
bool cmp(people a,people b)
{
    if(a.money>b.money) return true;
    else if(a.money==b.money){
        if(a.cx<b.cx) return true;
        else return false;
    }
    else return false;
}
int main()
{
    int n;
    cin>>n;
    long long ans=0;
    for(int i=0;i<n;i++){
        cin>>p[i].name>>p[i].qm>>p[i].bj>>p[i].gb>>p[i].xb>>p[i].lw;
        p[i].cx=i;
        if(p[i].bj>80&&p[i].gb=='Y') p[i].money+=850;
        if(p[i].qm>85&&p[i].xb=='Y') p[i].money+=1000;
        if(p[i].qm>90) p[i].money+=2000;
        if(p[i].qm>85&&p[i].bj>80) p[i].money+=4000;
        if(p[i].qm>80&&p[i].lw>=1) p[i].money+=8000;
        ans+=p[i].money;
    }
    sort(p,p+n,cmp);
    cout<<p[0].name<<endl<<p[0].money<<endl<<ans<<endl;

    return 0;
}
