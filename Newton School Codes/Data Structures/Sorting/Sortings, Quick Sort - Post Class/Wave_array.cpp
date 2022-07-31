#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long

int main() {

	// Your code here
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i=i+2){
        swap(a[i], a[i+1]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
