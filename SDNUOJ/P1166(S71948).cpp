#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct days{
    int xx;
    int mm;
    int d;
}day[7];
bool cmp(days a,days b){
    if(a.xx>b.xx) return true;
    else if(a.xx==b.xx){
        if(a.d<b.d) return true;
        return false;
    }
    return  false;
}
int main()
{
    for(int i=1;i<=7;i++){
        cin>>day[i].xx>>day[i].mm;
        day[i].d=i;
        day[i].xx+=day[i].mm;
    }
    sort(day+1,day+8,cmp);
    cout<<day[1].d<<endl;
    return 0;
}
