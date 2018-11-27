#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int ans[11];
int main(){
	int n;
	ios::sync_with_stdio(false);
	cin>>n;
	int i=0;
	int m;
	cin>>m;
	while(n){
		ans[i]=n%m;
		n=n/m;
		i=i+1;
	}
	i=i-1;
	for(i;i>=0;i--){
		cout<<ans[i];
	}
	cout<<endl;
	return 0;
}