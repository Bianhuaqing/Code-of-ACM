#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000005];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
       for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[n-1]);
    }

    return 0;
}
