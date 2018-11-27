#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char a[10001];
int main(){
	gets(a);
	int len=strlen(a);
//	int flag=0;
	int ans=0;
	int w=0;
	int l=0;
	for(int i=0;i<len;i++){
		if(a[i]=='W'){
			w++; 
		}
		else l++;
		if(w==3){
			ans++;
			w=0;
			l=0;
		}
		else if(l==3){
			w=0;
			l=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}