#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std; 
int main(){
	int a,b;
	char c;
	cin>>a>>c>>b;
	if(c=='+'){
		cout<<a+b<<endl;
		getchar();
	}
	else if(c=='-'){
		cout<<a-b<<endl;
		getchar();
	}
	else if(c=='*'){
		cout<<a*b<<endl;
		getchar();
	}
	return 0;
}