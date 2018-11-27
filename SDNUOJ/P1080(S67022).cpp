#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int gcd(int a,int b){
	if(a==0) return b;
	if(b==0) return a;
	if(a>b) return gcd(a%b,b);
	if(a<b) return gcd(a,b%a);
}
int main(){
	int a,b;
	int c,d;
	ios::sync_with_stdio(false);
	cin>>a>>b;
	a*=a;
	b*=b;
	b-=a;
	if(b%a==0){
		cout<<b/a<<endl;
	}
	else{
		int t=gcd(a,b);
		cout<<b/t<<"/"<<a/t<<endl;
	}
	return 0;
}