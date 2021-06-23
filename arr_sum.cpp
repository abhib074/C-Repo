#include <bits/stdc++.h>
using namespace std;
void sumarr(int arr[]);
int n;
int main()
{
    
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sumarr(arr);
    return 0;
}
void sumarr(int arr[])
{ 
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        sum  = sum+arr[i];
    }
    cout<<sum<<"\n";
}