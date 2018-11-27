#include <bits/stdc++.h>

using namespace std;
struct ball
{
    string cl;
    int num;
}a[105];
bool cmp(ball x,ball y)
{
    if(x.num>y.num) return true;
    return false;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i].cl>>a[i].num;
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n-1;i++){
            cout<<a[i].cl<<" ";
        }
        cout<<a[n-1].cl<<endl;;
    }
    return 0;
}
