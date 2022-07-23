//Count the given element in array

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
    cout<<"Enter the elements in array."<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ele;
    cout<<"Enter the element to find the count."<<endl;
    cin>>ele;
    sort(a,a+n);
    ll mid1,start1=0,end1=n-1,res1,res2;
    while(start1<=end1)
    {
        mid1=(start1+end1)/2;
        if(ele==a[mid1])
        {
            res1=mid1;
            end1=mid1-1;
        }
        else if(ele>a[mid1])
        {
            start1=mid1+1;
        }
        else if(ele<a[mid1])
        {
            end1=mid1-1;
        }
    }
    ll mid2,start2=0,end2=n-1;
    while(start2<=end2)
    {
        mid2=(start2+end2)/2;
        if(ele==a[mid2])
        {
            res1=mid2;
            start2=mid2+1;
        }
        else if(ele>a[mid2])
        {
            start2=mid2+1;
        }
        else if(ele<a[mid2])
        {
            end2=mid2-1;
        }
    }
    ll res=abs(res1-res2)+1;
    cout<<"Count of the givenm element is "<<res;
    return 0;
}
