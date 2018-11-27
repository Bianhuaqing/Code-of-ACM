#include <iostream>
#include<cstdio>
#include<cstring>

using namespace std;
char a[100001];
char b[1001];
int main()
{
    cin>>a;
    cin>>b;
    char *p=strstr(a,b);
    if(NULL == p){
    cout<<"-1"<<endl;
    }
    else{
        cout<<p-a+1<<endl;
    }
    return 0;
}
