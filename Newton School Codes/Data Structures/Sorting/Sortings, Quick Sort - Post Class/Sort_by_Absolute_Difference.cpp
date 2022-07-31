#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n, int x)
{
    multimap<int, int> m;
    multimap<int ,int >:: iterator it;
    for (int i = 0 ; i < n; i++)
        m.insert(make_pair(abs(x-arr[i]),arr[i]));
 
    int i = 0;
    for (it = m.begin(); it != m.end(); it++)
        arr[i++] = (*it).second ;
}
int main()
{
    
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        rearrange(a, n, k);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
