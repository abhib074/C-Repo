#include <bits/stdc++.h>
using namespace std;
int miss(int arr[], int n);
int tsum = 0,sum=0;
int main()
{
    int n;    
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<miss(arr,n)<<"\n";
    return 0;
}
int miss(int arr[],int n)
{
    tsum = ((n+1)*(n+2))/2;
    for(int i =0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    cout<<tsum<<" "<<sum<<"\n";
    return (tsum - sum);
}