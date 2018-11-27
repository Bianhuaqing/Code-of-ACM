#include<bits/stdc++.h>

using namespace std;

long long f(long long t)
{
    long long a=0;
    if(t==2) return 2;
    else if(t==1) return 1;
    else return a=a+f(t-1)+f(t-2);
}
int main()
{
    long long n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
