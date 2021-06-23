#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matr=0;
    int i,j,dif;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>matr;
            if(matr== 1)
            {
                dif = abs(3-i)+abs(3-j);
            }
        
        }
    }
    cout<<dif;
    return 0;
}