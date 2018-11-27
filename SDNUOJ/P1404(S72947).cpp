#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<cstring>

using namespace std;

int s[5];

void zh(int a){
    int t=4;
    for(t;t>=0;t--){
        s[t]=a%2;
        a/=2;
    }
    for(int tt=0;tt<=4;tt++){
        printf("%d",s[tt]);
    }
    printf("\n");
    memset(s,0,5);
    return;
}
int main()
{
    for(int i=0;i<31;i++){
        zh(i);
    }
    cout<<"11111";
    return 0;
}
