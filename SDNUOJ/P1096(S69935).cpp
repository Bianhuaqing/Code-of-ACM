#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;
int a[5005];
int main()
{
    //cout << "Hello world!" << endl;
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        int t;
        scanf("%d",&t);
        cout<<a[t-1]<<endl;
    }
    return 0;
}
