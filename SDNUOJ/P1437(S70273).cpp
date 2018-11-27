#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
const double pi=acos(-1);

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int r;
    scanf("%d",&r);
    double ans=pi*1.0*r*r;
    //ans=(long long)(ans*10000000+0.5);
   // ans=(double)ans/10000000;
    printf("%.7f\n",ans);
    return 0;
}
