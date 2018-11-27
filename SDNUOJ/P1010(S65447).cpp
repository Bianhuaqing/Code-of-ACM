//WRITTEN BY LLL
#include<cstdio>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n-1;j++){
			cout<<" ";
		} 
		for(int k=1;k<=2*i-1;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	/*for(int i=n-1;i>=1;i--){
		for(int k=i;k<=n-i;k++){
			cout<<" ";
		}
		for(int j=i;j<=2*i-1;j++){
			cout<<"*";
		} 
		cout<<endl;
	}*/
	for(int i=1;i<=n-1;i++){
		
		for(int k=1;k<=i;k++){
			cout<<" ";
		}
		for(int j=1;j<=2*(n-i)-1;j++){
			cout<<"*";
		} 
		cout<<endl;
	}
	return 0;
}