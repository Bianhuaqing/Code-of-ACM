﻿#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int a[205];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    return 0;
}
