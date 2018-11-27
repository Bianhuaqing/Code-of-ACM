#include <bits/stdc++.h>

using namespace std;

int a[100005];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int i=0;
        int j=n-1;
        while(j-i>=2){
            printf("%d %d ",a[j],a[i]);
            i++;
            j--;
        }
        if(i==j) printf("%d\n",a[i]);
        else printf("%d %d\n",a[j],a[i]);
    }
    return 0;
}
