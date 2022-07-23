#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cout<<"Enter the size of array."<<endl;
    cin>>n;
    ll a[n];
    cout<<"Enter element in array."<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll start=0;
    ll last=n-1;
    ll mid=0;
    ll ele;
    bool b1=false;
    cout<<"Enter the element you want to search the index."<<endl;
    cin>>ele;
    while(start<=last)
    {
        mid=(start+last)/2;
        if(ele==a[mid])
        {
            break;
        }
        else if(ele<a[mid])
        {
            last=mid-1;
        }
        else if(ele>a[mid])
        {
            start=mid+1;
        }
    }
    cout<<"The Index of the element is "<<abs(mid);
    return 0;
}
