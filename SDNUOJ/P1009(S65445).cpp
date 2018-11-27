//WRITTEN BY LLL
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int sum=0;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		if(t>m){
			sum+=t;
		}
	}
	cout<<sum<<endl;
	return 0;
}