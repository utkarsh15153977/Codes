/*
Segregate even and odd numbers | Set 3
Given an array of integers, segregate even and odd numbers in the array. 
All the even numbers should be present first, and then the odd numbers.

Examples:

Input : 1 9 5 3 2 6 7 11
Output : 2 6 5 3 1 9 7 11

Input : 1 3 2 4 7 6 9 10
Output : 2 4 6 10 7 1 9 3
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
    ll a[n];
    cout<<"Enter the elements in array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll j=0,i=-1;
    while(j<n)
    {
        if(a[j]%2==0)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    cout<<"Final Array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}