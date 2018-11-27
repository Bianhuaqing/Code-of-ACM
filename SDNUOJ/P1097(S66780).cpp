#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	if(a==0) return b;
	if(a>b) return gcd(a%b,b);
	if(b>a) return gcd(a,b%a);
}
int main(){
	int a,b;
	ios::sync_with_stdio(false);
	while(cin>>a>>b){
	cout<<a/gcd(a,b)*b<<endl;
	//return 0;
	}
	return 0;
}