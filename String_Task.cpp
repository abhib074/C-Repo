#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for (int i =0;str[i]!='\0';i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            //str[i] = toLower(str[i]);
            str[i] = 'a' + (str[i] - 'A');
        }
        if(str[i]!='a' && str[i] != 'o' && str[i] !='y' && str[i] !='e' && str[i] !='u' && str[i] !='i')
        {
            cout<<"."<<str[i];
        }        
    }
    return 0;
}