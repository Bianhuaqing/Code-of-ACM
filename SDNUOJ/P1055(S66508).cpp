#include<cstdio>
#include<iostream>
//const int MOD=1000000007;
using namespace std;
//unsigned int a[100000001];
int map[101][101];
int ans=0;
int t=0;
int n,m;
void judge(int a,int b){
	for(int p=1;p<=m;p++){
		if(map[a][p]==1) t++;
	}
	for(int p=1;p<=m;p++){
	if(map[p][b]==1) t++;
	}
	return;
}
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>map[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			t=0;
			judge(i,j);
			if(ans<t) ans=t;
		}
	}
	cout<<ans<<endl;
	return 0;
} 