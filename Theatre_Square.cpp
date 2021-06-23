#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, area, tile, num;
    cin>>n>>m>>a;
    num = ceil(n/a)/ceil(m/a);
    cout<<num;
    return 0;
}