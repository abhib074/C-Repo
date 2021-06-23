#include <bits/stdc++.h>
using namespace std;
int x;
float y,bal;
int main()
{
    cin>>x>>y;
    
    if ((0<=x<=2000)&&(0<=y<=2000)&&(x % 5 == 0)&& y>=(x+0.5))
    {
        bal = y-x-0.5;
        printf("%.2f",bal);
    }
    else
    {
        printf("%.2f",y);
    }
    return 0;
}