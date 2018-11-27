#include<cstdio>
#include<iostream>
using namespace std;
/*int fib(int a){
	if(a==1||a==2) return 1;
	return fib(a-1)+fib(a-2);
}
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}*/
int a[49];
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	a[1]=a[2]=1;
	if(n==1||n==2) cout<<a[n];
	else{
	for(int i=3;i<=n;i++){
	   a[i]=a[i-1]+a[i-2];	
	  }
	  cout<<a[n];
	}
    return 0;
}