//Question-Chef and Strings 

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0,x;
        for(ll j=1;j<n;j++)
        {
            x=abs(a[j]-a[j-1])-1;
            sum=sum+x;
        }
        cout<<sum<<endl;
    }
    return 0;
}