//Question-Write a program to reverse an array or string

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    ll n;;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    ll a[n];
    cout<<"Enter the elements in array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Reversing the array"<<endl;
    for(ll i=n-1;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
