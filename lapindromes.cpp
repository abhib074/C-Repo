#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;    
    cin>>n;
    while(n--)
    {
        cin>>str;
        int lpart[26],rpart[26];
        for(int i = 0;i<26;i++)
        {
            lpart[i]=0;
            rpart[i]=0;
        }
        for(int j=0;j<str.length()/2;j++)
        {
            char curr;
            curr = str[j];
            lpart[curr - 97]++;

        }
        for(int k=(str.length()+1)/2;k<str.length();k++)
        {
            char curr;
            curr = str[k];
            rpart[curr - 97]++;
        }
        bool same = true;
        for (int i =0;i<26;i++)
        {
            if (lpart[i] != rpart[i])
            {
                same = false;
                break;
            }
        }
        if(same)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
return 0;
}