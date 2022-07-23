//Binary Search Tree (Searching element in an lsorted array in ascending order or decending order)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    ll n;
    cout<<"Enter the size of array."<<endl;
    cin>>n;
    ll a[n];
    cout<<"Enter the element in array."<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll start=0,end=n-1,ele,mid;
    cout<<"Enter the elemwnt you want to search "<<endl;
    cin>>ele;
    if(a[0]<a[1])
    {
        while(start<=end)
        {
            mid=(start+end)/2;
            if(a[mid]==ele)
            {
                break;
            }
            else if(ele>a[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    else if(a[0]>a[1])
    {
            while(start<=end)
        {
            mid=(start+end)/2;
            if(ele==a[mid])
            {
                break;
            }
            else if(ele<a[mid])
            {
            start=mid+1;
            }
            else if(ele>a[mid])
            {
                end=mid-1;
            }
        }
    }
    cout<<"The Index of the element is "<<abs(mid);
    return 0;
}