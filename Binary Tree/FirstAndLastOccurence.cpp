//First And Last Occurrence of a given Number

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
    ll ele,mid,start=0,end=n-1,res1,res2,ch;
    cout<<"Enter the element you want to search for the first and last occurence"<<endl;
    cin>>ele;
    sort(a,a+n);
    cout<<"Select "<<endl;
    cout<<"1.First Occurrence "<<endl;
    cout<<"2.Second Occurrence "<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            while(start<=end)
            {
                mid=(start+end)/2;
                if(ele==a[mid])
                {
                    res1=mid;
                    end=mid-1;
                }
                else if(ele>a[mid])
                {
                    start=mid+1;
                }
                else if(ele<a[mid])
                {
                    end=mid-1;
                }
            }
            cout<<"First occurrence of the given element is "<<res1;
        }
        break;
        case 2:
        {
            while(start<=end)
            {
                mid=(start+end)/2;
                if(ele==a[mid])
                {
                    res2=mid;
                    start=mid+1;
                }
                else if(ele>a[mid])
                {
                    start=mid+1;
                }
                else if(ele<a[mid])
                {
                    end=mid-1;
                }
            }
            cout<<"Last occurrence of the given element is "<<res1;
        }
        break;

        default:
        cout<<"Entered choice is not valid"<<endl;
        break;
    }
}
