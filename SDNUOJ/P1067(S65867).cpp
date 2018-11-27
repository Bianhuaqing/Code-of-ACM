#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std; 
int main(){
	int n;
	cin>>n;
	int t;
	int sum=0;
	while(scanf("%d",&t)!=EOF){
		if(t<=(n+30)) sum+=1;
	}
	cout<<sum<<endl;
	return 0;
}