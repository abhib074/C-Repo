#include <bits/stdc++.h>
using namespace std;
string str1, str2;
int i,j,sum1 = 0,sum2 = 0;
int main()
{
    cin>>str1;
    cin>>str2;
    for(i=0;str1[i]!='\0';i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            //s[i] = toLower(s[i]);
            str1[i] = 'a' + (str1[i] - 'A');
        }

    }
    for(j=0;str2[j]!='\0';j++)
    {
        if (str2[j] >= 'A' && str2[j] <= 'Z')
        {
            str2[j] = 'a' + (str2[j] - 'A');
        }
    }
    for(i=0;str1[i]!='\0';i++)
    {
        sum1 = sum1+int(str1[i]);
    }
    for(j=0;str2[j]!='\0';j++)
    {
        sum2 = sum2+int(str2[j]);
    }
    if(str1 == str2)
    {
        cout<<"0";
    }
    else if(sum1<sum2)
    {
        cout<<"-1";
    }
    else
    {
        cout<<"1";
    }
    
return 0;
}