/*
Question-Rearrange positive and negative numbers using inbuilt sort function
Given an array of positive and negative numbers, arrange them such that all 
negative integers appear before all the positive integers in the array without 
using any additional data structure like hash table, arrays, etc. 
The order of appearance should be maintained.
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
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    ll a[n],b[n];
    cout<<"Enter elements of array "<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[i]=a[i];
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            b[i]=a[i];
        }
    }
    cout<<"Final Array"<<endl;
    for(ll i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
