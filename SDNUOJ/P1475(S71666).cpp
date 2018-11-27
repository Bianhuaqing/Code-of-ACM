#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=1;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                int t=i*100+j*10+k;
                if(t==(i*i*i+j*j*j+k*k*k)){
                    cout<<t<<'\n';
                }
            }
        }
    }
    return 0;
}
