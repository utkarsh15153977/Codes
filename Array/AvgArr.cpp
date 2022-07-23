//Question- Average of the given array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements in array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    float avg;
    int s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=(float)s/n;
    cout<<"Average of the array is"<<endl;
    cout<<avg;
    return 0;
}
