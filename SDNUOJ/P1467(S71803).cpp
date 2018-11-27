#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int yh[40][40];
void work(int a)
{
    for(int i=2; i<=a; i++)
    {
        for(int j=2; j<=i; j++)
        {
            yh[i][j]=yh[i-1][j-1]+yh[i-1][j];
        }
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        yh[i][1]=1;
        yh[i][i]=1;
    }
    work(n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<yh[i][j]<<" ";
        }
        cout<<yh[i][i]<<endl;
        //cout<<endl;
    }
    return 0;
}
