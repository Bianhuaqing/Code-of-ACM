#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std; 
int jc(int a){
	if(a==0) return 1;
	if(a>=1) return a*jc(a-1);
}
int main(){
	int n;
	cin>>n;
	long long ans=jc(n);
	cout<<ans<<endl;
	return 0;
}