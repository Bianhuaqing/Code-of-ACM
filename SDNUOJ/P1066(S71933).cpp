#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int n[1000005];
bool cmp(int a,int b){
    if(a>=b) return true;
    return false;

}
int main()
{
    long long k;
    cin>>k;
    long long i=0;
    while(cin>>n[i]){
        i++;
    }
    i--;
    sort(n,n+i,cmp);
    long long ans=0;
    for(int j=0;j<k;j++){
        ans+=n[j];
    }
    cout<<ans<<endl;
    return 0;
}
