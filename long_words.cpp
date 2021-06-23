#include <bits/stdc++.h>
using namespace std;
int t,len_str,le;
string str;
int main()
{
    cin>>t;
    while(t){
        cin>>str;
        len_str = str.length();
        if(len_str>10){
            le = len_str-2;
            cout<<str[0]<<le<<str[len_str-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
        t=t-1;
    }
    return 0;
}