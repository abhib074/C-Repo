#include <bits/stdc++.h>
using namespace std;
int t=0,num,res;
int main()
{
    cin>>t;
    while(t){
        cin>>num;
        res = sqrt(num);
        cout<<round(res)<<endl;
        t=t-1;
    }
    return 0;
}