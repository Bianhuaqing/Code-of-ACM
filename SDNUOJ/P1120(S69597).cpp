#include <iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;

char a[15];
int b[15];
int main()
{
    gets(a);
    int t=0;
    int l=strlen(a);
    for(int i=0;i<l;i++){
        if(a[i]=='-') continue;
        else{
            b[t]=a[i]-'0';
            t++;
        }
    }
    int ans=0;
    for(int i=t-2;i>=0;i--){
        ans+=b[i]*(i+1);
    }
    if(ans%11==10){
        if(a[l-1]=='X') cout<<"Right"<<endl;
        else {
        for(int i=0;i<l-1;i++){
            cout<<a[i];
        }
        cout<<'X'<<endl;
    }
    }
    else{
        if(ans%11==b[t-1]) cout<<"Right"<<endl;
        else {
        for(int i=0;i<l-1;i++){
            cout<<a[i];
        }
        cout<<ans%11<<endl;
        }
    }
    //cout << "Hello world!" << endl;
    return 0;
}
