#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	int n;
	int ans=0;
	cin>>n;
	for(int i=0;i<=n/10;i++){
        for(int j=0;j<=(n-(i*10))/5;j++){
            for(int k=0;k<=(n-j*5-i*10);k++){
                if((i*10+j*5+k)==n) ans++;
            }
        }
	}
	cout<<ans<<endl;
	return 0;
}
