#include <bits/stdc++.h>
#include <sstream>

using namespace std;
string s;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,s);
        stringstream ss(s);
        string t;
        bool fl=false;
        while(ss>>t){
            if(fl){
                cout<<' ';
            }
            fl=true;
            reverse(t.begin(),t.end());
            cout<<t;
        }
        cout<<endl;
    }
    return 0;
}
