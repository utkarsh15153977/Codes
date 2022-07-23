//Question-Move all zeroes to end of array

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
    cout<<"Enter the elements of array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector <int> va;
    vector <int> vb;
    vector <int> vc;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            va.push_back(a[i]);
        }
        else
        {
            vb.push_back(a[i]);
        }    
    }
    cout<<"Final Array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<vb[i]<<" ";
    }
    return 0;
}
