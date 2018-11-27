#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int a1,a2,a3,a4,a5;
        int ans=0;
        for(int i=a; i<=b; i++)
        {
            a1=i%10;
            a2=i/10%10;
            a3=i/100%10;
            a4=i/1000%10;
            a5=i/10000;
            if(a1==4||a2==4||a3==4||a4==4||a5==4)
            {
                continue;
            }
            else
            {
                ans++;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}
