#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void move(char x,char y){
    cout<<x<<"->"<<y<<endl;
    return;
}
void hannoi(int t,char a,char b,char c){
    if(t==1){
        move(a,c);
        return;
    }
    else {
        hannoi(t-1,a,c,b);
        move(a,c);
        hannoi(t-1,b,a,c);
        //hannoi(t-1,a,b,c);
        return;
    }

}

int main()
{
    //cout << "Hello world!" << endl;
    int n;
    scanf("%d",&n);
    //move('A','C');
    hannoi(n,'A','B','C');
    return 0;
}