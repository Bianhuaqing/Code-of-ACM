#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++){
        int count;
        int ans=0;
        cin>>count;
        for(int j=1;j<=count;j++){
            int a;
            cin>>a;
            ans+=a;
        }
        cout<<ans<<endl<<endl;
    }
        int ans=0;
        int count; 
        cin>>count;
        for(int j=1;j<=count;j++){
            int a;
            cin>>a;
            ans+=a;
        }
        cout<<ans<<endl;
    return 0;
}