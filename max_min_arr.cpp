#include <bits/stdc++.h>
using namespace std;
void maxmin(int arr[]);
int n;
int main()
{
    
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    maxmin(arr);
    return 0;
}
void maxmin(int arr[])
{ 
    sort(arr,arr+n);
    cout<<arr[0]<<"\n";
    cout<<arr[n-1];
}