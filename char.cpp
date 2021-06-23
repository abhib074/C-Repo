#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cout <<"Enter a character"<<"\n";
    cin >> s;
    if(s == 'a' ||s == 'e' ||s == 'i' ||s == 'o' ||s == 'u' ||s == 'A' ||s == 'E' ||s == 'I' ||s == 'O' ||s == 'U')
    {
        cout<<"It is a vowel";
    }
    else{
        cout<<"It is a consonant";
    }
    return 0;
}