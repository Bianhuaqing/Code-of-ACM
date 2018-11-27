#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct qujian{
int l;
int r;
};
qujian qj[1005];
bool cmp(qujian a,qujian b){
     if(a.l<=b.l) return true;
     return false;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
        scanf("%d%d",&qj[i].l,&qj[i].r);
	}
	sort(qj,qj+n,cmp);
	int ans=n;
	for(int i=0;i<n-1;i++){
        if(qj[i+1].l<qj[i].r){
            ans--;
            if(qj[i+1].r<qj[i].r){
                qj[i+1].r=qj[i].r;
            }
        }
	}
	cout<<ans<<endl;
	return 0;
}