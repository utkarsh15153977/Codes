#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector <int> v;
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            v.push_back(a[i]);
        }
        else {
            v.push_back(a[i]-1);
        }
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
    }
    cout<<sum;
    return 0;
}
