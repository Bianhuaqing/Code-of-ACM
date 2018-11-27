#include <bits/stdc++.h>
#include<stack>
using namespace std;

stack<char> st;
int main()
{
    int T;
    cin>>T;
    getchar();
    while(T--){
        while(1)
        {
            char ch=getchar();
            if(ch==' ')
            {
                while(!st.empty())
                {
                    cout<<st.top();
                    st.pop();
                }
                cout<<' ';
            }
            else if(ch=='\n'){
                while(!st.empty())
                {
                    cout<<st.top();
                    st.pop();
                }
                cout<<endl;
                break;
            }
            else st.push(ch);
        }
    }
    return 0;
}
