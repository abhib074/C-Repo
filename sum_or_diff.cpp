#include <bits/stdc++.h>
using namespace std;
int n1,n2,sum,diff;
int main()
{
    cin>>n1;
    cin>>n2;
    if(n1>n2){
        diff=n1-n2;
        cout<<diff;
    }
    else{
        sum=n1+n2;
        cout<<sum;
    }

    return 0;
}