#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std; 
int main(){
	cout<<"老大有几个苹果"<<endl;
	int sum=0;
	int t;
	cin>>t;
	sum+=t;
	cout<<"老大有几个橘子"<<endl;
	cin>>t;
	sum+=t;
	cout<<"老大有几个香蕉"<<endl;
	cin>>t;
	sum+=t;
	cout<<"老大有几个草莓"<<endl;
	cin>>t;
	sum+=t;
	int sum1=0;
	cout<<"小白菜有几个苹果"<<endl;
	cin>>t;
	sum1+=t;
	cout<<"小白菜有几个橘子"<<endl;
	cin>>t;
	sum1+=t;
	cout<<"小白菜有几个香蕉"<<endl;
	cin>>t;
	sum1+=t;
	cout<<"小白菜有几个草莓"<<endl;
	cin>>t;
	sum1+=t;
	
	int ans=sum+sum1;
	cout<<"偶们不只是有苹果，还有橘子，香蕉，草莓……"<<endl;
	cout<<"偶们总共有"<<ans<<"个水果~~"<<endl;
	cout<<"老大总共有"<<sum<<"个水果~~"<<endl;
	cout<<"小白菜总共有"<<sum1<<"个水果~~"<<endl;
	
	return 0;
}