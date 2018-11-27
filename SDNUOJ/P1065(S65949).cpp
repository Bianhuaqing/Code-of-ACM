#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char a[10001];
int main(){
	while(gets(a)){
		int len=strlen(a);
		for(int i=0;i<len;i++){
			if(a[i]=='W'&&a[i+1]=='O'&&a[i+2]=='W'){
				cout<<i+1<<endl;
			} 
			else continue;
		}
	}
	return 0;
}