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
            //s[i] = toLower(s[i]);
            str2[j] = 'a' + (str2[j] - 'A');
        }

    }
    if (str1 == str2)
    {
        cout << "0" << endl;
    }
    else
    {
        for (i = 0; i < str1.length(); i++)
        {
            if (str1[i] < str2[i])
            {
                cout << "-1" << endl;
                break;
            }
            if (str1[i] > str2[i])
            {
                cout << "1" << endl;
                break;
            }
        }
    }
    
return 0;
}
