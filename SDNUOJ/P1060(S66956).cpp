#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[12];
bool cmp(int a,int b){
	if(a>=b) return true;
	return false;
}
int main(){
	int n,k;
	ios::sync_with_stdio(false);
	cin>>n>>k;
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	sort(a,a+k,cmp);
	for(int i=k;i<n;i++){
		int t;
		cin>>t;
		if(t>=a[k-1]){
			a[k]=t;
			sort(a,a+k+1,cmp);
		}
	}
	cout<<a[k-1]<<endl;
	return 0;
}