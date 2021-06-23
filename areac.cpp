#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;
int main()
{
    int r;
    double area;
    cout<<"Enter the radius"<<"\n";
    cin>>r;
    area = PI*pow(r,2);
    cout<<"The area of the circle with radius "<<r <<" is: "<<area;
    return 0;
}