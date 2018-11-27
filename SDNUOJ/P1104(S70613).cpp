#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct DATAS{
    int number;
    int data;
    int cx;
}n[100005];
bool cmp(DATAS a,DATAS b){
     if(a.data<b.data) return true;
     else if(a.data>b.data) return false;
     else if(a.data==b.data){
        if(a.cx<b.cx) return true;
        return false;
     }
}
int main()
{
    //cout << "Hello world!" << endl;
    int i=0;
    while(cin>>n[i].number>>n[i].data){
            n[i].cx=i;
        i++;
    }
    sort(n,n+i,cmp);
    for(int j=0;j<i;j++){
        cout<<n[j].number<<" "<<n[j].data<<endl;
    }
    return 0;
}
