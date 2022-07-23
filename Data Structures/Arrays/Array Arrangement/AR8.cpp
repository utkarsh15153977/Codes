/*
Question-Rearrange array such that even positioned are greater than odd
Given an array A of n elements, sort the array according to the following relations :
 A[i] >= A[i-1]  , if i is even.
 A[i] <= A[i-1]  , if i is odd.
Print the resultant array.
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
    ll b[n],j=0,k=n-1;
    for(ll i=0;i<n;i++)
    {
        if((i+1)%2==0)
        {
            b[i]=a[k--];
        }
        else
        {
            b[i]=a[j+1];
        }
    }
    cout<<"The final array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
