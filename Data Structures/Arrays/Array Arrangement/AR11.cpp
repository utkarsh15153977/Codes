/*
Question-Arrange given numbers to form the biggest number | Set 1
Given an array of numbers, arrange them in a way that yields the 
largest value. For example, if the given numbers are {54, 546, 548, 60}, 
the arrangement 6054854654 gives the largest value. And if the given 
numbers are {1, 34, 3, 98, 9, 76, 45, 4}, then the arrangement 
998764543431 gives the largest value.
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
    sort(a,a+n,greater<int>());
    cout<<"Final result"<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
