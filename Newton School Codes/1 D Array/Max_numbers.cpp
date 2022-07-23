#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int t;
    cin>>t;
    while(t>=1){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[n-1]<<" "<<a[n-2]<<" "<<a[n-3];
        cout<<endl;
        t--;
    }
    return 0;
}
