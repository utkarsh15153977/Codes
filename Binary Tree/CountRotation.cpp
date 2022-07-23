//Find the number of rotation the array which is rotated in right side.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    ll n;
    cout<<"Enter the size."<<endl;
    cin>>n;
    ll a[n],b[n];
    cout<<"Enter the elements."<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    sort(b,b+n);
    ll res=b[0],index;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==res)
        {
            index=i;
            break;
        }
    }
    cout<<"The number of rotation of the sorted array is "<<index;
    return 0;
}
