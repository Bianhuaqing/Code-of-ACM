#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<iomanip>

using namespace std;

bool is_angle(int x,int y,int z){
    if(x+y>z&&x+z>y&&y+z>x) return true;
    return false;
}
double ans[10];
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        if(is_angle(a,b,c)==false){
            cout<<"Error"<<endl;
        }
        else{
            ans[0]=(a*a*1.0+b*b-c*c)/(2.0*a*b);
            ans[1]=(b*b*1.0+c*c-a*a)/(2.0*c*b);
            ans[2]=(a*a*1.0+c*c-b*b)/(2.0*a*c);
            sort(ans,ans+3);
            printf("%.3lf\n",acos(ans[0]));
        }
    }
    return 0;
}
