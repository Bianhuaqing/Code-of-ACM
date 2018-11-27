#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std; 
int main(){
	double n;
	cin>>n;
	int ans;
	int t1;
	t1=(int)n;
	int t2=(int)(n+0.5);
	if(t1!=t2){
		cout<<t2<<endl;
	}
	else cout<<t1<<endl;
	return 0;
}