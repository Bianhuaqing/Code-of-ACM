#include <iostream>
#include<bits/stdc++.h>

using namespace std;

char a[10005];
int main()
{
    while(gets(a)){
            int flag=0;
        int l=strlen(a);

            for(int i=0;i<l;i++){
                if(a[i]<='z'&&a[i]>='a'&&flag==0){
                    a[i]=a[i]-32;
                    flag=1;
                }
            else if(flag==0&&(a[i]>'z'||a[i]<'a')){
                flag=1;
            }
                else if(a[i]==' '){
                    flag=0;
                }
            }

        for(int i=0;i<l;i++){
            cout<<a[i];
        }
        cout<<'\n';
    }
    return 0;
}
