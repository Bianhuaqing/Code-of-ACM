#include <iostream>
#include<cstring>
#include<cstdio>
#include<cmath>

using namespace std;
char a[17],b[17];

int main()
{
    while(scanf("%s",a)!=EOF){
        scanf("%s",b);
        int la=strlen(a);
        int lb=strlen(b);
        long long x=0,y=0;
        if(a[0]=='-'){
                long long t=1;
            for(int i=la-1;i>0;i--){
                if(a[i]!=','){
                    x=x+(a[i]-'0')*t;
                    t*=10;
                }
                else continue;
            }
            x=-x;
        }
        else if(a[0]!='-'){
            long long t=1;
            for(int i=la-1;i>=0;i--){
                if(a[i]!=','){
                    x=x+(a[i]-'0')*t;
                    t*=10;
                }
                else continue;
            }
        }
        if(b[0]=='-'){
                long long t=1;
            for(int i=lb-1;i>0;i--){
                if(b[i]!=','){
                    y=y+(b[i]-'0')*t;
                    t*=10;
                }
                else continue;
            }
            y=-y;
        }
        else if(b[0]!='-'){
                long long t=1;
            for(int i=lb-1;i>=0;i--){
                if(b[i]!=','){
                    y=y+(b[i]-'0')*t;
                    t*=10;
                }
                else continue;
            }
        }
         long long ans=x+y;
        cout<<ans<<endl;
    }
    return 0;
}
