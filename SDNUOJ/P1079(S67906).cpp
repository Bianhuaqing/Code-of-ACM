#include <iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int anss,ansx;
    anss=a*c-b*d;
    ansx=c*b+a*d;
    if(anss==0&&ansx==0){
    	cout<<"0"<<endl;
    }
    else if(anss==0&&ansx!=0&&ansx!=1&&ansx!=-1){
    	cout<<ansx<<"i"<<endl;
    }
    else if(anss==0&&ansx!=0&&ansx==1&&ansx!=-1){
    	cout<<"i"<<endl;
    }
    else if(anss==0&&ansx!=0&&ansx!=1&&ansx==-1){
    	cout<<"-i"<<endl;
    }
    else if(ansx==0){
    	cout<<anss<<endl;
    }
    else if(ansx<0&&ansx!=-1) cout<<anss<<"-"<<-ansx<<"i"<<endl;
    else if(ansx==-1) cout<<anss<<"-"<<"i"<<endl;
     else if(ansx==1) cout<<anss<<"+"<<"i"<<endl;
      else if(ansx>0&&ansx!=1) cout<<anss<<"+"<<ansx<<"i"<<endl;
    return 0;
}
