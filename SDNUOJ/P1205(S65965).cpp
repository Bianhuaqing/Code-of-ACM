#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std; 
long long jc(int a){
	if(a<=1) return 1;
	if(a>1) return a*jc(a-1);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		long long ans=jc(n);
		cout<<ans<<endl<<endl;
	}
	return 0;
}