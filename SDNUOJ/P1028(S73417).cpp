#include <iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

struct person{
    char name[50];
    int month;
    int day;
    int year;
}p[1005];
bool cmp(person a,person b){
    if(a.year<b.year) return true;
    if(a.year>b.year) return false;
    if(a.year==b.year){
        if(a.month<b.month) return true;
        if(a.month>b.month) return false;
        if(a.month==b.month){
            if(a.day<b.day) return true;
            if(a.day>b.day) return false;
            if(a.day==b.day){
                if(strcmp(a.name,b.name)<0) return true;
                if(strcmp(a.name,b.name)>0) return false;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d/%d/%d",&p[i].name,&p[i].month,&p[i].day,&p[i].year);
    }
    sort(p,p+n,cmp);
    for(int i=0;i<=n-1;i++){
        cout<<p[i].name<<endl;
    }
    return 0;
}
