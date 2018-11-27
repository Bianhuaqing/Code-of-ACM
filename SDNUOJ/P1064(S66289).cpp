#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int a[3];
char c[10001];
int main(){
	memset(a,0,sizeof(a));
	memset(c,0,sizeof(c));
	//char c[10001];
	while(gets(c)){
		int len=strlen(c); 
		//memset(a,0,sizeof(a));
		for(int i=0;i<len;i++){
			if(c[i]=='B') a[1]++;
		else if(c[i]=='G') a[2]++;
		}
		if(a[1]==a[2]){
			int t=a[1]+a[2];
			for(int i=1;i<=t;i++){
				if(i%2==1) cout<<'B';
				else cout<<'G';
			}
			cout<<endl;
			memset(a,0,sizeof(a));
			memset(c,0,sizeof(c));
		}
		else if(a[1]-a[2]==1){
				int t=a[1]+a[2];
			for(int i=1;i<=t;i++){
				if(i%2==1) cout<<'B';
				else cout<<'G';
			}
			cout<<endl;
			memset(a,0,sizeof(a));
			memset(c,0,sizeof(c));
		}
			else if(a[1]-a[2]==-1){
				int t=a[1]+a[2];
			for(int i=1;i<=t;i++){
				if(i%2==1) cout<<'G';
				else cout<<'B';
			}
			cout<<endl;
			memset(a,0,sizeof(a));
			memset(c,0,sizeof(c));
		}
		else {
			cout<<"No"<<endl;
			memset(a,0,sizeof(a));
			memset(c,0,sizeof(c));
		}
		
		
	}
	return 0;
}
