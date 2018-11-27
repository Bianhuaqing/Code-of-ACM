#include <iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

const double pi=acos(-1);
int gcd(int x,int y){
    if(x==0) return y;
    if(y==0) return x;
    if(x>y) return gcd(x%y,y);
    return gcd(x,y%x);
}

int main()
{
    //cout << "Hello world!" << endl;
    int c,j,k;
    cin>>c>>j>>k;
    j/=gcd(j,k);
    k/=gcd(j,k);
    double a=(double)c*1.0*k/j;
    double b=sqrt(a*a-c*c);
    double ans=pi*a*b;
    printf("%.3f\n",ans);

    return 0;
}
