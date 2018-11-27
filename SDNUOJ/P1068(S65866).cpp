#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std; 
char a[10001];
int main(){
	while(gets(a)){
		//gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
			cout<<a[i]; 
		}
		else cout<<a[i];
	}
	cout<<endl;
	}
	return 0;
}