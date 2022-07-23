/*Question-Rearrange array such that arr[i] >= arr[j] if i 
is even and arr[i]<=arr[j] if i is odd and j < i.
Given an array of n elements. Our task is to write a program to rearrange 
the array such that elements at even positions are greater than all 
elements before it and elements at odd positions are less than all elements before it.
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
    cout<<"Enter the elements of array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll even=n/2,odd=n-even;
    ll j=odd-1;
    for(ll i=0;i<n;i=i+2)
    {
        b[i]=a[j];
        j--;
    }
    j=odd;
    for(ll i=1;i<n;i=i+2)
    {
        b[i]=a[j];
        j++;
    }
    cout<<"The final array is "<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
