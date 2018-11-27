#include <bits/stdc++.h>

using namespace std;

char a[1005];
int main()
{
    A:
    while(gets(a))
    {
        int l=strlen(a);
        int sum=0;
        int cnt=0;
        cnt=(l+1)/2;
        for(int i=0;i<l;i++){
            if(a[i]==' ')
            {
                continue;
            }
            else if(a[i]>'F'||a[i]<'A'||a[i]=='E')
            {
                cout<<"Unknown letter grade in input"<<endl;
                goto A;
            }
            else if(a[i]=='A')
            {
                sum+=4;
            }
            else if(a[i]=='B')
            {
                sum+=3;
            }
            else if(a[i]=='C')
            {
                sum+=2;
            }
            else if(a[i]=='D')
            {
                sum+=1;
            }
            else if(a[i]=='F')
            {
                sum+=0;
            }
        }
        double ans=sum*1.0/cnt;
        printf("%.2f\n",ans);
    }
    return 0;
}
