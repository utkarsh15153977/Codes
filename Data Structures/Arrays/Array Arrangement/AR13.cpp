/*Question-Rearrange an array in maximum minimum form.
Given a sorted array of positive integers, rearrange 
the array alternately i.e first element should be 
maximum value, second minimum value, third second max, 
fourth second min and so on.
Examples:

Input: arr[] = {1, 2, 3, 4, 5, 6, 7}
Output: arr[] = {7, 1, 6, 2, 5, 3, 4}

Input: arr[] = {1, 2, 3, 4, 5, 6}
Output: arr[] = {6, 1, 5, 2, 4, 3}
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    ll a[n];
    cout<<"Enter the elements in array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll j=0,k=n-1,b[n];
    sort(a,a+n);
    for(ll i=1;i<n;i=i+2)
    {
        b[i]=a[j];
        j++;
    }
    for(ll i=0;i<n;i=i+2)
    {
        b[i]=a[k];
        k--;
    }
    cout<<"Final Result"<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}