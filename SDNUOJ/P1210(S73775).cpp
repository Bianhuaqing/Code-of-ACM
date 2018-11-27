#include <bits/stdc++.h>
#include <queue>

using namespace std;

queue <string> wj;
queue <string> yj;
queue <string> yb;

int main()
{
    int type;
    while(cin>>type)
    {
        string t;
        cin>>t;
        if(type==0)
        {
            if(wj.size()<10)
            {
                wj.push(t);
            }
            else
            {
                wj.pop();
                wj.push(t);
            }
        }
        else if(type==1)
        {
            if(yj.size()<10)
            {
                yj.push(t);
            }
            else
            {
                yj.pop();
                yj.push(t);
            }
        }
        else if(type==2)
        {
            if(yb.size()<10)
            {
                yb.push(t);
            }
            else
            {
                yb.pop();
                yb.push(t);
            }
        }
    }
    int t1=wj.size();
    int t2=yj.size();
    int t3=yb.size();

    reverse(&wj.front(),&wj.back()+1);
    reverse(&yj.front(),&yj.back()+1);
    reverse(&yb.front(),&yb.back()+1);
    for(int i=1; i<=10; i++)
    {
        if(wj.empty()){
            cout<<"0 ";
        }
        else
        {
            cout<<wj.front()<<" ";
            wj.pop();
        }
        if(yj.empty()){
            cout<<"0 ";
        }
        else
        {
            cout<<yj.front()<<" ";
            yj.pop();
        }
        if(yb.empty()){
            cout<<"0"<<endl;
        }
        else
        {
            cout<<yb.front()<<endl;
            yb.pop();
        }
    }
    return 0;
}
