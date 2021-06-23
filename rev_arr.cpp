#include <bits/stdc++.h>
using namespace std;
int reverse(int arr[], int start, int end);
int n;
int main()
{
    
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int start = 0, end = n-1;
    reverse(arr, start, end);
    return 0;
}
int reverse(int arr[], int start, int end)
{ 
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i= 0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}