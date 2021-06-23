#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,chk = "hello";
    int count=0,j=0;
    cin>>str;
    for(int i =0;str[i]!='\0';i++)
    {
        
        if(str[i]==chk[j])
        {
            j++;
            count++;
        }
        if(count == 5)
            break;
        
    }
    if(count==5)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}