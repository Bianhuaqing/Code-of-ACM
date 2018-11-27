#include <iostream>
#include<bits/stdc++.h>

using namespace std;

char c[10];
int main()
{
    cin>>c;
    int l=strlen(c);
    for(int i=0;i<l;i++){
    printf("%c",c[i]+4);
    }
    cout<<endl;
    return 0;
}
