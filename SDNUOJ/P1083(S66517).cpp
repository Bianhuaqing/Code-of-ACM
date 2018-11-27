#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int ans[36];
//int fib(int a){
//	if(a==1) return 1;
//	if(a==2) return 2;
//	if(a==3) return 4;
//	return (fib(a-1)+fib(a-2)+fib(a-3));
//}
int main(){
	ios::sync_with_stdio(false);
	int n;
	while(cin>>n){
		memset(ans,0,sizeof(ans));
		if(n==1||n==2||n==3){
			ans[1]=1;
			ans[2]=2;
			ans[3]=4;
			cout<<ans[n]<<endl;
		}
		else {
			ans[1]=1;
			ans[2]=2;
			ans[3]=4;
			for(int i=4;i<=n;i++){
				ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
			}
			cout<<ans[n]<<endl;
		}
	}
	return 0;
}