// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,x,y,pr;
//     cin>>a>>b>>x>>y;
//     pr = (a*x)+(b*y);
//     cout<<pr;
//  return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%5 == 0 && n%11 == 0)
        cout<<"BOTH";
    else if(n%5 == 0 || n%11 == 0)
        cout<<"ONE";
    else
        cout<<"NONE";
return 0;
}