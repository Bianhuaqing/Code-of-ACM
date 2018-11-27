#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        int ans=0;
        for(int j=1;j<=a;j++){
            int b;
            cin>>b;
            ans+=b;
        }
        cout<<ans<<endl;
    } 
    return 0;
}