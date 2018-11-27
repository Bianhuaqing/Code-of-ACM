#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std; 
int a[10];
int main(){
	memset(a,0,sizeof(a));
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int j=i;
		while(j){
			a[j%10]++;
			j/=10;
		}
	}
	/*for(int i=0;i<=8;i++){
		cout<<a[i]<<" ";
	}*/
	cout<<a[1];
	return 0;
} 