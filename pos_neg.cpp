#include <bits/stdc++.h>
using namespace std;
char s;
int main()
{
    cout<<"Enter a character"<<"\n ";
    cin>>s;
    if(s>=65 && s<=90)
    {
        cout<<"Capital letter";
    }
    else if(s>=97 && s<=122)
    {
        cout<<"Small letter";
    }
    else if (s>=48 && s<=57)
    {
        cout<<"Numeric";
    } 
    else
    {
        cout<<"Special Character";
    }

    return 0;
}