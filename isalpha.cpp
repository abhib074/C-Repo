#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cout <<"Enter a character"<<"\n";
    cin >> s;
    if(s>='a'&&s<='z'||s>='A'&&s<='Z')
    {
        cout<<"It is an alphabet";
    }
    else
    {
        cout<<"It is not an alphabet";
    }
    return 0;
}  