/*
Question-Rearrange an array such that arr[i] = i
Given an array of elements of length N, ranging 
from 0 to N – 1. All elements may not be present 
in the array. If element is not present then there 
will be -1 present in the array. Rearrange the array 
such that A[i] = i and if i is not present, display -1 at that place.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    ll n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    ll a[n],b[n];
    cout<<"Enter the elements in array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=-1&&a[i]!=1)
        {
            ll x=a[i];
            while(a[x]!=-1&&a[x]!=x)
            {
                ll y=a[x];
                a[x]=x;
                x=y;
            }
            a[x]=x;
            if(a[i]!=i)
            {
                a[i]=-1;
            }
        }
    }
    cout<<"Final Array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
