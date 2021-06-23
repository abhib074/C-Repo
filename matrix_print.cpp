#include <bits/stdc++.h>
using namespace std;
//int matrixMul(int arr[]);
int n;
int main()
{
    
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    //cout<<matrixMul(arr)<<"\n";
    return 0;
}
// int matrixMul(int arr[])
// {
    
//     return 0;
// }