#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,num,rem;
    cin>>n;
    while(n--)
    {
        cin>>num;
        int rev=0;
        while(num!=0)
        {
            rem = num%10;
            rev =rev*10+rem;
            num=num/10;
        }
        cout<<rev<<"\n";
    }
    
    
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// void solve()
// {
//     ll n, rev;
//     cin >> n;
//     rev = 0;
//     while (n != 0)
//     {
//         ll last = n % 10;    
//         rev = rev * 10 + last;
//         n = n / 10;            
//     }
//     cout << rev << "\n";
// }
// int main()
// {
//     int t;
//     ios_base::sync_with_stdio(false);
//     cout.tie(nullptr);
//     cin>>t;
//     while (t--)
//     {
//         solve();
//     }
// }