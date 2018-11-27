#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct name{
    string s;
}na[10005];
name nb[1005];
int main()
{
    ios::sync_with_stdio(false);
    //cout << "Hello world!" << endl;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>na[i].s;
    }
    for(int i=0;i<m;i++){
        cin>>nb[i].s;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(nb[i].s==na[j].s){
                cout<<"YES"<<endl;
                break;
            }
            else if(j==n-1){
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}
