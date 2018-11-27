#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
long long ans=1;
void fast_pow(long long a,long long b,long long MOD){
	while(b){
		a=a%MOD;
		if(b&1==1){
			ans=(ans*a)%MOD;
		}
		a=(a*a)%MOD;
		b=b/2;
	}
}
int main(){
	long long x,y,z;
	cin>>x>>y>>z;
	fast_pow(x,y,z);
	cout<<ans<<endl;
	return 0;
}