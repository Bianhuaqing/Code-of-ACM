#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,z,l;
    scanf("%d%d%d",&n,&z,&l);
    int ansz=0,ansl=0;
    for(int i=1;i<=n;i++){
        if(i%z==0){
            ansz++;
        }
        else if(i%l==0) ansl++;
    }
    cout<<ansz<<" "<<ansl<<endl;
    return 0;
}