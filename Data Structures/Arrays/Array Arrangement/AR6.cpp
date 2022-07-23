//Question-Move all zeroes to end of array | Set-2 (Using single traversal)

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
    ll a[n],pos1=n-1,pos2=0;
    ll b[n];
    cout<<"Enter the elements in array"<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[pos1]=a[i];
        }
        else
        {
            b[pos2]=a[i];
        }
        pos1--;
        pos2++;
    }
    cout<<"Final array "<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
