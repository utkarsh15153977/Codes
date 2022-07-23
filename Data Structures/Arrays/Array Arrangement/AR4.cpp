/*Question-Rearrange positive and negative 
numbers in O(n) time and O(1) extra space.
An array contains both positive and negative numbers in 
random order. Rearrange the array elements so that positive 
and negative numbers are placed alternatively. Number of 
positive and negative numbers need not be equal. 
If there are more positive numbers they appear at the end of the array. 
If there are more negative numbers, they too appear in the end of the array.

For example, if the input array is [-1, 2, -3, 4, 5, 6, -7, 8, 9], 
then the output should be [9, -7, 8, -3, 5, -1, 2, 4, 6]
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
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    cout<<"Enter the elements in array "<<endl;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector <int> va;
    vector <int> vb;
    vector <int> vc;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>=0 && i%2==1)
        {
            va.push_back(a[i]);
        }
        else if(a[i]<0 && i%2==0)
        {
            va.push_back(a[i]);
        }
    }
    cout<<"The final array"<<endl;
    for(ll i=0;i<va.size();i++)
    {
        cout<<va[i]<<" ";
    }
    return 0;
}
