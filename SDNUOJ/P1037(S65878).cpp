#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std; 
int main(){
	int n;
	cin>>n;
	int ans=0;
	//int t=sqrt(n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			ans+=i;
			//ans+=(n/i);
		}
		else continue;
	}
	cout<<ans<<endl;
	return 0;
}