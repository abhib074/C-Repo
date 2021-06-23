#include <bits/stdc++.h>
using namespace std;
int t=0,a,b,c;
int main()
{
    cin>>t;
    while(t){
        cin>>a>>b>>c;
        if(a>b && a>c){
            cout<<b<<endl;
        }
        else if(b>a && b>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
        t=t-1;
    }
    return 0;
}